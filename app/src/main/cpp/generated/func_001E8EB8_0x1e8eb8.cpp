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

// Function: func_001E8EB8
// Address: 0x1e8eb8 - 0x1e8f78
void func_001E8EB8_0x1e8eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8EB8_0x1e8eb8");
#endif

    switch (ctx->pc) {
        case 0x1e8eccu: goto label_1e8ecc;
        case 0x1e8ef4u: goto label_1e8ef4;
        default: break;
    }

    ctx->pc = 0x1e8eb8u;

    // 0x1e8eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8ebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e8ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8ec4: 0xc07a41e  jal         func_1E9078
    ctx->pc = 0x1E8EC4u;
    SET_GPR_U32(ctx, 31, 0x1E8ECCu);
    ctx->pc = 0x1E8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8EC4u;
    // 0x1e8ec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9078u, 0x1E8EC4u, 0x1E8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8ECCu;
label_1e8ecc:
    // 0x1e8ecc: 0x960200b4  lhu         $v0, 0xB4($s0)
    ctx->pc = 0x1e8eccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1e8ed0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1e8ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1e8ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e8ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8edc: 0x0  nop
    ctx->pc = 0x1e8edcu;
    // NOP
    // 0x1e8ee0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e8ee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e8ee4: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1e8ee4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x1e8ee8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1e8ee8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x1e8eec: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x1E8EECu;
    SET_GPR_U32(ctx, 31, 0x1E8EF4u);
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x1E8EECu, 0x1E8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8EF4u;
label_1e8ef4:
    // 0x1e8ef4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e8ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ef8: 0x960200b4  lhu         $v0, 0xB4($s0)
    ctx->pc = 0x1e8ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1e8efc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e8f00: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8F00u;
    {
        const bool branch_taken_0x1e8f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F00u;
        // 0x1e8f04: 0x26030054  addiu       $v1, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f00) {
            ctx->pc = 0x1E8F18u;
            goto label_1e8f18;
        }
    }
    ctx->pc = 0x1E8F08u;
    // 0x1e8f08: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e8f0c: 0x26060054  addiu       $a2, $s0, 0x54
    ctx->pc = 0x1e8f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1e8f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8F10u;
    {
        const bool branch_taken_0x1e8f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F10u;
        // 0x1e8f14: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f10) {
            ctx->pc = 0x1E8F30u;
            goto label_1e8f30;
        }
    }
    ctx->pc = 0x1E8F18u;
label_1e8f18:
    // 0x1e8f18: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1e8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e8f1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8f20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e8f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e8f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8f28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e8f2c: 0xae0400a8  sw          $a0, 0xA8($s0)
    ctx->pc = 0x1e8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 4));
label_1e8f30:
    // 0x1e8f30: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8f34: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e8f38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8f3c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8F3Cu;
    {
        const bool branch_taken_0x1e8f3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F3Cu;
        // 0x1e8f40: 0xae0300ac  sw          $v1, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f3c) {
            ctx->pc = 0x1E8F50u;
            goto label_1e8f50;
        }
    }
    ctx->pc = 0x1E8F44u;
    // 0x1e8f44: 0x960200b4  lhu         $v0, 0xB4($s0)
    ctx->pc = 0x1e8f44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1e8f48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8F48u;
    {
        const bool branch_taken_0x1e8f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F48u;
        // 0x1e8f4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f48) {
            ctx->pc = 0x1E8F54u;
            goto label_1e8f54;
        }
    }
    ctx->pc = 0x1E8F50u;
label_1e8f50:
    // 0x1e8f50: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1e8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1e8f54:
    // 0x1e8f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e8f58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e8f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8f60: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1e8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1e8f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F6Cu;
        // 0x1e8f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8F74u;
    // 0x1e8f74: 0x0  nop
    ctx->pc = 0x1e8f74u;
    // NOP
    ctx->pc = 0x1e8f78u;
}
