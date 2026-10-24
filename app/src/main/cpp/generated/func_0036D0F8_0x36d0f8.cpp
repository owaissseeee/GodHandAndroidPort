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

// Function: func_0036D0F8
// Address: 0x36d0f8 - 0x36d1a8
void func_0036D0F8_0x36d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D0F8_0x36d0f8");
#endif

    switch (ctx->pc) {
        case 0x36d11cu: goto label_36d11c;
        case 0x36d14cu: goto label_36d14c;
        case 0x36d160u: goto label_36d160;
        default: break;
    }

    ctx->pc = 0x36d0f8u;

    // 0x36d0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36d0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36d0fc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x36d0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36d100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d104: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36d104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36d108: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36d108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d10c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36d10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36d110: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36d110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36d114: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x36D114u;
    SET_GPR_U32(ctx, 31, 0x36D11Cu);
    ctx->pc = 0x36D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D114u;
    // 0x36d118: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x36D114u, 0x36D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D11Cu;
label_36d11c:
    // 0x36d11c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36d11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d120: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x36D120u;
    {
        const bool branch_taken_0x36d120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D120u;
        // 0x36d124: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d120) {
            ctx->pc = 0x36D190u;
            goto label_36d190;
        }
    }
    ctx->pc = 0x36D128u;
    // 0x36d128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d12c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x36d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x36d130: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x36d130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d134: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x36d134u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36d138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d13c: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36D13Cu;
    {
        const bool branch_taken_0x36d13c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x36D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D13Cu;
        // 0x36d140: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d13c) {
            ctx->pc = 0x36D190u;
            goto label_36d190;
        }
    }
    ctx->pc = 0x36D144u;
    // 0x36d144: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x36D144u;
    SET_GPR_U32(ctx, 31, 0x36D14Cu);
    ctx->pc = 0x36D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D144u;
    // 0x36d148: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x36D144u, 0x36D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D14Cu;
label_36d14c:
    // 0x36d14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36d14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d150: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x36D150u;
    {
        const bool branch_taken_0x36d150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D150u;
        // 0x36d154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d150) {
            ctx->pc = 0x36D190u;
            goto label_36d190;
        }
    }
    ctx->pc = 0x36D158u;
    // 0x36d158: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x36D158u;
    SET_GPR_U32(ctx, 31, 0x36D160u);
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36D158u, 0x36D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D160u;
label_36d160:
    // 0x36d160: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x36d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x36d164: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x36D164u;
    {
        const bool branch_taken_0x36d164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D164u;
        // 0x36d168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d164) {
            ctx->pc = 0x36D190u;
            goto label_36d190;
        }
    }
    ctx->pc = 0x36D16Cu;
    // 0x36d16c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x36d16cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x36d170: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x36d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x36d174: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x36d174u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36d178: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D178u;
    {
        const bool branch_taken_0x36d178 = (GPR_S64(ctx, 17) <= 0);
        if (branch_taken_0x36d178) {
            ctx->pc = 0x36D17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D178u;
            // 0x36d17c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D194u;
            goto label_36d194;
        }
    }
    ctx->pc = 0x36D180u;
    // 0x36d180: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36d180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d184: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x36d184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x36d188: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x36d18c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x36d18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_36d190:
    // 0x36d190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36d194:
    // 0x36d194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36d194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36d198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36d19c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1A0u;
        // 0x36d1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D1A8u;
}
