#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: __do_global_ctors
// Address: 0x79a148 - 0x79a1f8
void ps2___do_global_ctors_0x79a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79a148");
#endif

    switch (ctx->pc) {
        case 0x79a148u: goto label_79a148;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a150u: goto label_79a150;
        case 0x79a154u: goto label_79a154;
        case 0x79a158u: goto label_79a158;
        case 0x79a15cu: goto label_79a15c;
        case 0x79a160u: goto label_79a160;
        case 0x79a164u: goto label_79a164;
        case 0x79a168u: goto label_79a168;
        case 0x79a16cu: goto label_79a16c;
        case 0x79a170u: goto label_79a170;
        case 0x79a174u: goto label_79a174;
        case 0x79a178u: goto label_79a178;
        case 0x79a17cu: goto label_79a17c;
        case 0x79a180u: goto label_79a180;
        case 0x79a184u: goto label_79a184;
        case 0x79a188u: goto label_79a188;
        case 0x79a18cu: goto label_79a18c;
        case 0x79a190u: goto label_79a190;
        case 0x79a194u: goto label_79a194;
        case 0x79a198u: goto label_79a198;
        case 0x79a19cu: goto label_79a19c;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a1a4u: goto label_79a1a4;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1acu: goto label_79a1ac;
        case 0x79a1b0u: goto label_79a1b0;
        case 0x79a1b4u: goto label_79a1b4;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1bcu: goto label_79a1bc;
        case 0x79a1c0u: goto label_79a1c0;
        case 0x79a1c4u: goto label_79a1c4;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1ccu: goto label_79a1cc;
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a1d4u: goto label_79a1d4;
        case 0x79a1d8u: goto label_79a1d8;
        case 0x79a1dcu: goto label_79a1dc;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a1ecu: goto label_79a1ec;
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a1f4u: goto label_79a1f4;
        default: break;
    }

    ctx->pc = 0x79a148u;

label_79a148:
    // 0x79a148: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79a14c:
    // 0x79a14c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79a150:
    // 0x79a150: 0x8ce5a284  lw          $a1, -0x5D7C($a3)
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943364)));
label_79a154:
    // 0x79a154: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a158:
    // 0x79a158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79a15c:
    // 0x79a15c: 0x24e3a284  addiu       $v1, $a3, -0x5D7C
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943364));
label_79a160:
    // 0x79a160: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79a164:
    // 0x79a164: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79a168:
    if (ctx->pc == 0x79A168u) {
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A16Cu;
        goto label_79a16c;
    }
    ctx->pc = 0x79A164u;
    {
        const bool branch_taken_0x79a164 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A164u;
        // 0x79a168: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a164) {
            ctx->pc = 0x79A1ACu;
            goto label_79a1ac;
        }
    }
    ctx->pc = 0x79A16Cu;
label_79a16c:
    // 0x79a16c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a170:
    // 0x79a170: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a174:
    if (ctx->pc == 0x79A174u) {
        ctx->pc = 0x79A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A170u;
        // 0x79a174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A178u;
        goto label_79a178;
    }
    ctx->pc = 0x79A170u;
    {
        const bool branch_taken_0x79a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A170u;
        // 0x79a174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a170) {
            ctx->pc = 0x79A1ACu;
            goto label_79a1ac;
        }
    }
    ctx->pc = 0x79A178u;
label_79a178:
    // 0x79a178: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a17c:
    // 0x79a17c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79a17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79a180:
    // 0x79a180: 0x24e4a284  addiu       $a0, $a3, -0x5D7C
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943364));
label_79a184:
    // 0x79a184: 0x0  nop
    ctx->pc = 0x79a184u;
    // NOP
label_79a188:
    // 0x79a188: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79a188u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79a18c:
    // 0x79a18c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a190:
    // 0x79a190: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79a194:
    // 0x79a194: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79a194u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79a198:
    // 0x79a198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79a19c:
    // 0x79a19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79a1a0:
    // 0x79a1a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a1a4:
    // 0x79a1a4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79a1a8:
    if (ctx->pc == 0x79A1A8u) {
        ctx->pc = 0x79A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1A4u;
        // 0x79a1a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1ACu;
        goto label_79a1ac;
    }
    ctx->pc = 0x79A1A4u;
    {
        const bool branch_taken_0x79a1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1a4) {
            ctx->pc = 0x79A1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1A4u;
            // 0x79a1a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a188;
        }
    }
    ctx->pc = 0x79A1ACu;
label_79a1ac:
    // 0x79a1ac: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79a1acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79a1b0:
    // 0x79a1b0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79a1b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79a1b4:
    // 0x79a1b4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79a1b8:
    if (ctx->pc == 0x79A1B8u) {
        ctx->pc = 0x79A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B4u;
        // 0x79a1b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1BCu;
        goto label_79a1bc;
    }
    ctx->pc = 0x79A1B4u;
    {
        const bool branch_taken_0x79a1b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B4u;
        // 0x79a1b8: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b4) {
            ctx->pc = 0x79A1E4u;
            goto label_79a1e4;
        }
    }
    ctx->pc = 0x79A1BCu;
label_79a1bc:
    // 0x79a1bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79a1c0:
    // 0x79a1c0: 0x2442a284  addiu       $v0, $v0, -0x5D7C
    ctx->pc = 0x79a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943364));
label_79a1c4:
    // 0x79a1c4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79a1c8:
    // 0x79a1c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a1cc:
    // 0x79a1cc: 0x0  nop
    ctx->pc = 0x79a1ccu;
    // NOP
label_79a1d0:
    // 0x79a1d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79a1d4:
    // 0x79a1d4: 0x40f809  jalr        $v0
label_79a1d8:
    if (ctx->pc == 0x79A1D8u) {
        ctx->pc = 0x79A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D4u;
        // 0x79a1d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1DCu;
        goto label_79a1dc;
    }
    ctx->pc = 0x79A1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79A1DCu);
        ctx->pc = 0x79A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1D4u;
        // 0x79a1d8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1D4u, 0x79A1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A1DCu;
label_79a1dc:
    // 0x79a1dc: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79a1e0:
    if (ctx->pc == 0x79A1E0u) {
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1E4u;
        goto label_79a1e4;
    }
    ctx->pc = 0x79A1DCu;
    {
        const bool branch_taken_0x79a1dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1dc) {
            ctx->pc = 0x79A1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1DCu;
            // 0x79a1e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1d0;
        }
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a1e8:
    // 0x79a1e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a1ec:
    // 0x79a1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a1f0:
    // 0x79a1f0: 0x3e00008  jr          $ra
label_79a1f4:
    if (ctx->pc == 0x79A1F4u) {
        ctx->pc = 0x79A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F0u;
        // 0x79a1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A1F8u;
        goto label_fallthrough_0x79a1f0;
    }
    ctx->pc = 0x79A1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F0u;
        // 0x79a1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79a1f0:
    ctx->pc = 0x79A1F8u;
}
} // namespace gh_r702
