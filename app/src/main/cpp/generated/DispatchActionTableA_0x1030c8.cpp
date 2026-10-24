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

// Function: DispatchActionTableA
// Address: 0x1030c8 - 0x103170
void DispatchActionTableA_0x1030c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispatchActionTableA_0x1030c8");
#endif

    switch (ctx->pc) {
        case 0x1030c8u: goto label_1030c8;
        case 0x1030ccu: goto label_1030cc;
        case 0x1030d0u: goto label_1030d0;
        case 0x1030d4u: goto label_1030d4;
        case 0x1030d8u: goto label_1030d8;
        case 0x1030dcu: goto label_1030dc;
        case 0x1030e0u: goto label_1030e0;
        case 0x1030e4u: goto label_1030e4;
        case 0x1030e8u: goto label_1030e8;
        case 0x1030ecu: goto label_1030ec;
        case 0x1030f0u: goto label_1030f0;
        case 0x1030f4u: goto label_1030f4;
        case 0x1030f8u: goto label_1030f8;
        case 0x1030fcu: goto label_1030fc;
        case 0x103100u: goto label_103100;
        case 0x103104u: goto label_103104;
        case 0x103108u: goto label_103108;
        case 0x10310cu: goto label_10310c;
        case 0x103110u: goto label_103110;
        case 0x103114u: goto label_103114;
        case 0x103118u: goto label_103118;
        case 0x10311cu: goto label_10311c;
        case 0x103120u: goto label_103120;
        case 0x103124u: goto label_103124;
        case 0x103128u: goto label_103128;
        case 0x10312cu: goto label_10312c;
        case 0x103130u: goto label_103130;
        case 0x103134u: goto label_103134;
        case 0x103138u: goto label_103138;
        case 0x10313cu: goto label_10313c;
        case 0x103140u: goto label_103140;
        case 0x103144u: goto label_103144;
        case 0x103148u: goto label_103148;
        case 0x10314cu: goto label_10314c;
        case 0x103150u: goto label_103150;
        case 0x103154u: goto label_103154;
        case 0x103158u: goto label_103158;
        case 0x10315cu: goto label_10315c;
        case 0x103160u: goto label_103160;
        case 0x103164u: goto label_103164;
        case 0x103168u: goto label_103168;
        case 0x10316cu: goto label_10316c;
        default: break;
    }

    ctx->pc = 0x1030c8u;

label_1030c8:
    // 0x1030c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1030c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1030cc:
    // 0x1030cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1030ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1030d0:
    // 0x1030d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1030d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1030d4:
    // 0x1030d4: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1030d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1030d8:
    // 0x1030d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1030dc:
    if (ctx->pc == 0x1030DCu) {
        ctx->pc = 0x1030DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D8u;
        // 0x1030dc: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1030E0u;
        goto label_1030e0;
    }
    ctx->pc = 0x1030D8u;
    {
        const bool branch_taken_0x1030d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1030d8) {
            ctx->pc = 0x1030DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1030D8u;
            // 0x1030dc: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1030E0u;
            goto label_1030e0;
        }
    }
    ctx->pc = 0x1030E0u;
label_1030e0:
    // 0x1030e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1030e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1030e4:
    // 0x1030e4: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1030e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1030e8:
    // 0x1030e8: 0x2447c7b0  addiu       $a3, $v0, -0x3850
    ctx->pc = 0x1030e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
label_1030ec:
    // 0x1030ec: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1030ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1030f0:
    // 0x1030f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1030f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1030f4:
    // 0x1030f4: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1030f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1030f8:
    // 0x1030f8: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1030fc:
    // 0x1030fc: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_103100:
    if (ctx->pc == 0x103100u) {
        ctx->pc = 0x103100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030FCu;
        // 0x103100: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103104u;
        goto label_103104;
    }
    ctx->pc = 0x1030FCu;
    {
        const bool branch_taken_0x1030fc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x103100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030FCu;
        // 0x103100: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030fc) {
            ctx->pc = 0x103128u;
            goto label_103128;
        }
    }
    ctx->pc = 0x103104u;
label_103104:
    // 0x103104: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x103104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_103108:
    // 0x103108: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x103108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_10310c:
    // 0x10310c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_103110:
    // 0x103110: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x103110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103114:
    // 0x103114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_103118:
    // 0x103118: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x103118u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_10311c:
    // 0x10311c: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x10311cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_103120:
    // 0x103120: 0x10000004  b           . + 4 + (0x4 << 2)
label_103124:
    if (ctx->pc == 0x103124u) {
        ctx->pc = 0x103124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103120u;
        // 0x103124: 0x2543c7b0  addiu       $v1, $t2, -0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103128u;
        goto label_103128;
    }
    ctx->pc = 0x103120u;
    {
        const bool branch_taken_0x103120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103120u;
        // 0x103124: 0x2543c7b0  addiu       $v1, $t2, -0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103120) {
            ctx->pc = 0x103134u;
            goto label_103134;
        }
    }
    ctx->pc = 0x103128u;
label_103128:
    // 0x103128: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x103128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_10312c:
    // 0x10312c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103130:
    // 0x103130: 0x2543c7b0  addiu       $v1, $t2, -0x3850
    ctx->pc = 0x103130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952880));
label_103134:
    // 0x103134: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x103134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_103138:
    // 0x103138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10313c:
    // 0x10313c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_103140:
    if (ctx->pc == 0x103140u) {
        ctx->pc = 0x103140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10313Cu;
        // 0x103140: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103144u;
        goto label_103144;
    }
    ctx->pc = 0x10313Cu;
    {
        const bool branch_taken_0x10313c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x103140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10313Cu;
        // 0x103140: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10313c) {
            ctx->pc = 0x103158u;
            goto label_103158;
        }
    }
    ctx->pc = 0x103144u;
label_103144:
    // 0x103144: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x103144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_103148:
    // 0x103148: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x103148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_10314c:
    // 0x10314c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10314cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_103150:
    // 0x103150: 0x10000002  b           . + 4 + (0x2 << 2)
label_103154:
    if (ctx->pc == 0x103154u) {
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103158u;
        goto label_103158;
    }
    ctx->pc = 0x103150u;
    {
        const bool branch_taken_0x103150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103150) {
            ctx->pc = 0x10315Cu;
            goto label_10315c;
        }
    }
    ctx->pc = 0x103158u;
label_103158:
    // 0x103158: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x103158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10315c:
    // 0x10315c: 0xe0f809  jalr        $a3
label_103160:
    if (ctx->pc == 0x103160u) {
        ctx->pc = 0x103160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10315Cu;
        // 0x103160: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103164u;
        goto label_103164;
    }
    ctx->pc = 0x10315Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x103164u);
        ctx->pc = 0x103160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10315Cu;
        // 0x103160: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10315Cu, 0x103164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103164u;
label_103164:
    // 0x103164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103168:
    // 0x103168: 0x3e00008  jr          $ra
label_10316c:
    if (ctx->pc == 0x10316Cu) {
        ctx->pc = 0x10316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103168u;
        // 0x10316c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103170u;
        goto label_fallthrough_0x103168;
    }
    ctx->pc = 0x103168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103168u;
        // 0x10316c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103168:
    ctx->pc = 0x103170u;
}
