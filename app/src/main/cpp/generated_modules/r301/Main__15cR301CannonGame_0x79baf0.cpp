#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Main__15cR301CannonGame
// Address: 0x79baf0 - 0x79bb60
void Main__15cR301CannonGame_0x79baf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main__15cR301CannonGame_0x79baf0");
#endif

    switch (ctx->pc) {
        case 0x79baf0u: goto label_79baf0;
        case 0x79baf4u: goto label_79baf4;
        case 0x79baf8u: goto label_79baf8;
        case 0x79bafcu: goto label_79bafc;
        case 0x79bb00u: goto label_79bb00;
        case 0x79bb04u: goto label_79bb04;
        case 0x79bb08u: goto label_79bb08;
        case 0x79bb0cu: goto label_79bb0c;
        case 0x79bb10u: goto label_79bb10;
        case 0x79bb14u: goto label_79bb14;
        case 0x79bb18u: goto label_79bb18;
        case 0x79bb1cu: goto label_79bb1c;
        case 0x79bb20u: goto label_79bb20;
        case 0x79bb24u: goto label_79bb24;
        case 0x79bb28u: goto label_79bb28;
        case 0x79bb2cu: goto label_79bb2c;
        case 0x79bb30u: goto label_79bb30;
        case 0x79bb34u: goto label_79bb34;
        case 0x79bb38u: goto label_79bb38;
        case 0x79bb3cu: goto label_79bb3c;
        case 0x79bb40u: goto label_79bb40;
        case 0x79bb44u: goto label_79bb44;
        case 0x79bb48u: goto label_79bb48;
        case 0x79bb4cu: goto label_79bb4c;
        case 0x79bb50u: goto label_79bb50;
        case 0x79bb54u: goto label_79bb54;
        case 0x79bb58u: goto label_79bb58;
        case 0x79bb5cu: goto label_79bb5c;
        default: break;
    }

    ctx->pc = 0x79baf0u;

label_79baf0:
    // 0x79baf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79baf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79baf4:
    // 0x79baf4: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79baf8:
    // 0x79baf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79baf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_79bafc:
    // 0x79bafc: 0x2463dc80  addiu       $v1, $v1, -0x2380
    ctx->pc = 0x79bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958208));
label_79bb00:
    // 0x79bb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_79bb04:
    // 0x79bb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79bb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79bb08:
    // 0x79bb08: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x79bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_79bb0c:
    // 0x79bb0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x79bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_79bb10:
    // 0x79bb10: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x79bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_79bb14:
    // 0x79bb14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79bb18:
    // 0x79bb18: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x79bb18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_79bb1c:
    // 0x79bb1c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79bb20:
    // 0x79bb20: 0xc0f809  jalr        $a2
label_79bb24:
    if (ctx->pc == 0x79BB24u) {
        ctx->pc = 0x79BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB20u;
        // 0x79bb24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB28u;
        goto label_79bb28;
    }
    ctx->pc = 0x79BB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x79BB28u);
        ctx->pc = 0x79BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB20u;
        // 0x79bb24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB20u, 0x79BB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79BB28u;
label_79bb28:
    // 0x79bb28: 0x9e02009c  lwu         $v0, 0x9C($s0)
    ctx->pc = 0x79bb28u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_79bb2c:
    // 0x79bb2c: 0x211bb  dsra        $v0, $v0, 6
    ctx->pc = 0x79bb2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 6);
label_79bb30:
    // 0x79bb30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79bb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79bb34:
    // 0x79bb34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_79bb38:
    if (ctx->pc == 0x79BB38u) {
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB3Cu;
        goto label_79bb3c;
    }
    ctx->pc = 0x79BB34u;
    {
        const bool branch_taken_0x79bb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb34) {
            ctx->pc = 0x79BB4Cu;
            goto label_79bb4c;
        }
    }
    ctx->pc = 0x79BB3Cu;
label_79bb3c:
    // 0x79bb3c: 0xc1e750a  jal         func_79D428
label_79bb40:
    if (ctx->pc == 0x79BB40u) {
        ctx->pc = 0x79BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB3Cu;
        // 0x79bb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB44u;
        goto label_79bb44;
    }
    ctx->pc = 0x79BB3Cu;
    SET_GPR_U32(ctx, 31, 0x79BB44u);
    ctx->pc = 0x79BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB3Cu;
    // 0x79bb40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D428u, 0x79BB3Cu, 0x79BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB44u;
label_79bb44:
    // 0x79bb44: 0xc1e7522  jal         func_79D488
label_79bb48:
    if (ctx->pc == 0x79BB48u) {
        ctx->pc = 0x79BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB44u;
        // 0x79bb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB4Cu;
        goto label_79bb4c;
    }
    ctx->pc = 0x79BB44u;
    SET_GPR_U32(ctx, 31, 0x79BB4Cu);
    ctx->pc = 0x79BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB44u;
    // 0x79bb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D488u, 0x79BB44u, 0x79BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB4Cu;
label_79bb4c:
    // 0x79bb4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79bb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79bb50:
    // 0x79bb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79bb54:
    // 0x79bb54: 0x3e00008  jr          $ra
label_79bb58:
    if (ctx->pc == 0x79BB58u) {
        ctx->pc = 0x79BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB54u;
        // 0x79bb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BB5Cu;
        goto label_79bb5c;
    }
    ctx->pc = 0x79BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB54u;
        // 0x79bb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB5Cu;
label_79bb5c:
    // 0x79bb5c: 0x0  nop
    ctx->pc = 0x79bb5cu;
    // NOP
    ctx->pc = 0x79bb60u;
}
} // namespace gh_r301
