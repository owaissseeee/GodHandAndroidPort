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

// Function: WaveObj_fillWaveTable
// Address: 0x2e8168 - 0x2e81d8
void WaveObj_fillWaveTable_0x2e8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WaveObj_fillWaveTable_0x2e8168");
#endif

    switch (ctx->pc) {
        case 0x2e8190u: goto label_2e8190;
        default: break;
    }

    ctx->pc = 0x2e8168u;

    // 0x2e8168: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e8168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e816c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8170: 0xac60b540  sw          $zero, -0x4AC0($v1)
    ctx->pc = 0x2e8170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61B540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61B540u, _value); } while (0);
    // 0x2e8174: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e8174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8178: 0x8c8202bc  lw          $v0, 0x2BC($a0)
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x2e817c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2e817cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e8180: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E8180u;
    {
        const bool branch_taken_0x2e8180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8180u;
        // 0x2e8184: 0x2462b540  addiu       $v0, $v1, -0x4AC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8180) {
            ctx->pc = 0x2E81D0u;
            goto label_2e81d0;
        }
    }
    ctx->pc = 0x2E8188u;
    // 0x2e8188: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e818c: 0x0  nop
    ctx->pc = 0x2e818cu;
    // NOP
label_2e8190:
    // 0x2e8190: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2e8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2e8194: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8194u;
    {
        const bool branch_taken_0x2e8194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8194) {
            ctx->pc = 0x2E81B0u;
            goto label_2e81b0;
        }
    }
    ctx->pc = 0x2E819Cu;
    // 0x2e819c: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2e819cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x2e81a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e81a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e81a4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2e81a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e81a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E81A8u;
    {
        const bool branch_taken_0x2e81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81A8u;
        // 0x2e81ac: 0x8c8202bc  lw          $v0, 0x2BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81a8) {
            ctx->pc = 0x2E81C0u;
            goto label_2e81c0;
        }
    }
    ctx->pc = 0x2E81B0u;
label_2e81b0:
    // 0x2e81b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e81b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e81b4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e81b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e81b8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2e81b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2e81bc: 0x8c8202bc  lw          $v0, 0x2BC($a0)
    ctx->pc = 0x2e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
label_2e81c0:
    // 0x2e81c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e81c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e81c4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2e81c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e81c8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E81C8u;
    {
        const bool branch_taken_0x2e81c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81C8u;
        // 0x2e81cc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81c8) {
            ctx->pc = 0x2E8190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8190;
        }
    }
    ctx->pc = 0x2E81D0u;
label_2e81d0:
    // 0x2e81d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E81D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E81D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E81D8u;
}
