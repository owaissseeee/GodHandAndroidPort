#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: checkBomb_main__5cR409P8cGameObj
// Address: 0x79bab8 - 0x79bb40
void checkBomb_main__5cR409P8cGameObj_0x79bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBomb_main__5cR409P8cGameObj_0x79bab8");
#endif

    switch (ctx->pc) {
        case 0x79baecu: goto label_79baec;
        case 0x79bb10u: goto label_79bb10;
        case 0x79bb28u: goto label_79bb28;
        default: break;
    }

    ctx->pc = 0x79bab8u;

    // 0x79bab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79babc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x79bac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bacc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79BACCu;
    {
        const bool branch_taken_0x79bacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BACCu;
        // 0x79bad0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bacc) {
            ctx->pc = 0x79BB28u;
            goto label_79bb28;
        }
    }
    ctx->pc = 0x79BAD4u;
    // 0x79bad4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x79bad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x79bad8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BAD8u;
    {
        const bool branch_taken_0x79bad8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAD8u;
        // 0x79badc: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bad8) {
            ctx->pc = 0x79BB28u;
            goto label_79bb28;
        }
    }
    ctx->pc = 0x79BAE0u;
    // 0x79bae0: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x79bae4: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x79BAE4u;
    SET_GPR_U32(ctx, 31, 0x79BAECu);
    ctx->pc = 0x79BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAE4u;
    // 0x79bae8: 0x2484c090  addiu       $a0, $a0, -0x3F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x79BAE4u, 0x79BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAECu;
label_79baec:
    // 0x79baec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79BAECu;
    {
        const bool branch_taken_0x79baec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAECu;
        // 0x79baf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baec) {
            ctx->pc = 0x79BB18u;
            goto label_79bb18;
        }
    }
    ctx->pc = 0x79BAF4u;
    // 0x79baf4: 0xc60016cc  lwc1        $f0, 0x16CC($s0)
    ctx->pc = 0x79baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79baf8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79baf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79bafc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79bafcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79bb00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bb00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79bb04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79bb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb08: 0xc1e6e08  jal         func_79B820
    ctx->pc = 0x79BB08u;
    SET_GPR_U32(ctx, 31, 0x79BB10u);
    ctx->pc = 0x79BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB08u;
    // 0x79bb0c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B820u, 0x79BB08u, 0x79BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB10u;
label_79bb10:
    // 0x79bb10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79BB10u;
    {
        const bool branch_taken_0x79bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB10u;
        // 0x79bb14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb10) {
            ctx->pc = 0x79BB2Cu;
            goto label_79bb2c;
        }
    }
    ctx->pc = 0x79BB18u;
label_79bb18:
    // 0x79bb18: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79bb1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79bb20: 0xc1e6e08  jal         func_79B820
    ctx->pc = 0x79BB20u;
    SET_GPR_U32(ctx, 31, 0x79BB28u);
    ctx->pc = 0x79BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB20u;
    // 0x79bb24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B820u, 0x79BB20u, 0x79BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB28u;
label_79bb28:
    // 0x79bb28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79bb2c:
    // 0x79bb2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79bb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bb34: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB3Cu;
    // 0x79bb3c: 0x0  nop
    ctx->pc = 0x79bb3cu;
    // NOP
    ctx->pc = 0x79bb40u;
}
} // namespace gh_r409
