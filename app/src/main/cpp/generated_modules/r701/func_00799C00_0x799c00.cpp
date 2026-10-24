#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799C00
// Address: 0x799c00 - 0x799cb0
void func_00799C00_0x799c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C00_0x799c00");
#endif

    switch (ctx->pc) {
        case 0x799c34u: goto label_799c34;
        case 0x799c48u: goto label_799c48;
        case 0x799c74u: goto label_799c74;
        default: break;
    }

    ctx->pc = 0x799c00u;

    // 0x799c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799c04: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799c08: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799c14: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x799c18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799c1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799c28: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x799c2c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C2Cu;
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C2Cu, 0x799C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C34u;
label_799c34:
    // 0x799c34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c38: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799c3c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x799c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x799c40: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x799c44: 0x0  nop
    ctx->pc = 0x799c44u;
    // NOP
label_799c48:
    // 0x799c48: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x799c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x799c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x799c50: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x799c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x799c54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x799c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x799c58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799c5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799c60: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799C60u;
    {
        const bool branch_taken_0x799c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c60) {
            ctx->pc = 0x799C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C60u;
            // 0x799c64: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C80u;
            goto label_799c80;
        }
    }
    ctx->pc = 0x799C68u;
    // 0x799c68: 0xa3b00000  sb          $s0, 0x0($sp)
    ctx->pc = 0x799c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x799c6c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799C6Cu;
    SET_GPR_U32(ctx, 31, 0x799C74u);
    ctx->pc = 0x799C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C6Cu;
    // 0x799c70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799C6Cu, 0x799C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C74u;
label_799c74:
    // 0x799c74: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799c78: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x799c78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x799c7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x799c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_799c80:
    // 0x799c80: 0x2a020017  slti        $v0, $s0, 0x17
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x799c84: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C84u;
        // 0x799c88: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c48;
        }
    }
    ctx->pc = 0x799C8Cu;
    // 0x799c8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799c94: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799c98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799c98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799c9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799ca0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x799CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA4u;
        // 0x799ca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CACu;
    // 0x799cac: 0x0  nop
    ctx->pc = 0x799cacu;
    // NOP
    ctx->pc = 0x799cb0u;
}
} // namespace gh_r701
