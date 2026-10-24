#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0033D090
// Address: 0x33d090 - 0x33d190
void func_0033D090_0x33d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D090_0x33d090");
#endif

    switch (ctx->pc) {
        case 0x33d0e4u: goto label_33d0e4;
        case 0x33d0fcu: goto label_33d0fc;
        default: break;
    }

    ctx->pc = 0x33d090u;

    // 0x33d090: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x33d090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33d094: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d098: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x33d098u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x33d09c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33d0a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33d0a4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x33d0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33d0ac: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x33d0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33d0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33d0b4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x33d0b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0b8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x33d0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0bc: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x33D0BCu;
    {
        const bool branch_taken_0x33d0bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0BCu;
        // 0x33d0c0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0bc) {
            ctx->pc = 0x33D168u;
            goto label_33d168;
        }
    }
    ctx->pc = 0x33D0C4u;
    // 0x33d0c4: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x33d0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33d0c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x33D0C8u;
    {
        const bool branch_taken_0x33d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d0c8) {
            ctx->pc = 0x33D0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D0C8u;
            // 0x33d0cc: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D108u;
            goto label_33d108;
        }
    }
    ctx->pc = 0x33D0D0u;
    // 0x33d0d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33d0d4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x33d0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0d8: 0x24a568f8  addiu       $a1, $a1, 0x68F8
    ctx->pc = 0x33d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26872));
    // 0x33d0dc: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x33D0DCu;
    SET_GPR_U32(ctx, 31, 0x33D0E4u);
    ctx->pc = 0x33D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0DCu;
    // 0x33d0e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x33D0DCu, 0x33D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0E4u;
label_33d0e4:
    // 0x33d0e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x33d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d0e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33d0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33d0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33d0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0f4: 0xc0cf152  jal         func_33C548
    ctx->pc = 0x33D0F4u;
    SET_GPR_U32(ctx, 31, 0x33D0FCu);
    ctx->pc = 0x33D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0F4u;
    // 0x33d0f8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C548u, 0x33D0F4u, 0x33D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0FCu;
label_33d0fc:
    // 0x33d0fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x33D0FCu;
    {
        const bool branch_taken_0x33d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0FCu;
        // 0x33d100: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0fc) {
            ctx->pc = 0x33D178u;
            goto label_33d178;
        }
    }
    ctx->pc = 0x33D104u;
    // 0x33d104: 0x0  nop
    ctx->pc = 0x33d104u;
    // NOP
label_33d108:
    // 0x33d108: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x33D108u;
    {
        const bool branch_taken_0x33d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d108) {
            ctx->pc = 0x33D10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D108u;
            // 0x33d10c: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D16Cu;
            goto label_33d16c;
        }
    }
    ctx->pc = 0x33D110u;
    // 0x33d110: 0x8d6200a0  lw          $v0, 0xA0($t3)
    ctx->pc = 0x33d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 160)));
    // 0x33d114: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x33D114u;
    {
        const bool branch_taken_0x33d114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d114) {
            ctx->pc = 0x33D118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D114u;
            // 0x33d118: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D150u;
            goto label_33d150;
        }
    }
    ctx->pc = 0x33D11Cu;
    // 0x33d11c: 0x856200a4  lh          $v0, 0xA4($t3)
    ctx->pc = 0x33d11cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x33d120: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x33D120u;
    {
        const bool branch_taken_0x33d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d120) {
            ctx->pc = 0x33D124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D120u;
            // 0x33d124: 0x956200a0  lhu         $v0, 0xA0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D150u;
            goto label_33d150;
        }
    }
    ctx->pc = 0x33D128u;
    // 0x33d128: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33d12c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33d130: 0x94439d54  lhu         $v1, -0x62AC($v0)
    ctx->pc = 0x33d130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3E9D54u));
    // 0x33d134: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x33d134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x33d138: 0xa56300a0  sh          $v1, 0xA0($t3)
    ctx->pc = 0x33d138u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d13c: 0x94829d56  lhu         $v0, -0x62AA($a0)
    ctx->pc = 0x33d13cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x3E9D56u));
    // 0x33d140: 0xa56200a2  sh          $v0, 0xA2($t3)
    ctx->pc = 0x33d140u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d144: 0x94a39d58  lhu         $v1, -0x62A8($a1)
    ctx->pc = 0x33d144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x3E9D58u));
    // 0x33d148: 0xa56300a4  sh          $v1, 0xA4($t3)
    ctx->pc = 0x33d148u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d14c: 0x956200a0  lhu         $v0, 0xA0($t3)
    ctx->pc = 0x33d14cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 160)));
label_33d150:
    // 0x33d150: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x33d150u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d154: 0x956300a2  lhu         $v1, 0xA2($t3)
    ctx->pc = 0x33d154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 162)));
    // 0x33d158: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x33d158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d15c: 0x956200a4  lhu         $v0, 0xA4($t3)
    ctx->pc = 0x33d15cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 164)));
    // 0x33d160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33D160u;
    {
        const bool branch_taken_0x33d160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D160u;
        // 0x33d164: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d160) {
            ctx->pc = 0x33D174u;
            goto label_33d174;
        }
    }
    ctx->pc = 0x33D168u;
label_33d168:
    // 0x33d168: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x33d168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_33d16c:
    // 0x33d16c: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x33d16cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33d170: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x33d170u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_33d174:
    // 0x33d174: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33d174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d178:
    // 0x33d178: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33d178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d17c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33d180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33d180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d184: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33d188: 0x3e00008  jr          $ra
    ctx->pc = 0x33D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D188u;
        // 0x33d18c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D190u;
}
