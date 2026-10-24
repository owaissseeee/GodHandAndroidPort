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

// Function: func_002AC5B0
// Address: 0x2ac5b0 - 0x2ac650
void func_002AC5B0_0x2ac5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC5B0_0x2ac5b0");
#endif

    switch (ctx->pc) {
        case 0x2ac644u: goto label_2ac644;
        default: break;
    }

    ctx->pc = 0x2ac5b0u;

    // 0x2ac5b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2ac5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac5b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac5b8: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x2ac5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac5bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac5c0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ac5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ac5c4: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2ac5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2ac5c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ac5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac5cc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2ac5ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ac5d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2ac5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ac5d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac5d8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2ac5d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ac5dc: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2ac5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ac5e0: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x2ac5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2ac5e4: 0x84c30008  lh          $v1, 0x8($a2)
    ctx->pc = 0x2ac5e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ac5e8: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x2ac5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ac5ec: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ac5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac5f0: 0x84c40006  lh          $a0, 0x6($a2)
    ctx->pc = 0x2ac5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2ac5f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ac5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ac5f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ac5f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac5fc: 0x0  nop
    ctx->pc = 0x2ac5fcu;
    // NOP
    // 0x2ac600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ac600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ac604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ac604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ac608: 0x0  nop
    ctx->pc = 0x2ac608u;
    // NOP
    // 0x2ac60c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ac60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ac610: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x2ac610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ac614: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x2ac614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ac618: 0x0  nop
    ctx->pc = 0x2ac618u;
    // NOP
    // 0x2ac61c: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x2ac61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2ac620: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x2ac620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2ac624: 0x0  nop
    ctx->pc = 0x2ac624u;
    // NOP
    // 0x2ac628: 0x46808420  cvt.s.w     $f16, $f16
    ctx->pc = 0x2ac628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x2ac62c: 0x0  nop
    ctx->pc = 0x2ac62cu;
    // NOP
    // 0x2ac630: 0x0  nop
    ctx->pc = 0x2ac630u;
    // NOP
    // 0x2ac634: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2ac634u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x2ac638: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x2ac638u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2ac63c: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2AC63Cu;
    SET_GPR_U32(ctx, 31, 0x2AC644u);
    ctx->pc = 0x2AC640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC63Cu;
    // 0x2ac640: 0x46018402  mul.s       $f16, $f16, $f1 (Delay Slot)
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2AC63Cu, 0x2AC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC644u;
label_2ac644:
    // 0x2ac644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac648: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC648u;
        // 0x2ac64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC650u;
}
