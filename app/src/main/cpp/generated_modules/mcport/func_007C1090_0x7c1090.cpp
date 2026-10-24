#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007C1090
// Address: 0x7c1090 - 0x7c10f8
void func_007C1090_0x7c1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007C1090_0x7c1090");
#endif

    switch (ctx->pc) {
        case 0x7c10c4u: goto label_7c10c4;
        default: break;
    }

    ctx->pc = 0x7c1090u;

    // 0x7c1090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c1094: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7c1094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7c1098: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c109c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C109Cu;
    {
        const bool branch_taken_0x7c109c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C109Cu;
        // 0x7c10a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c109c) {
            ctx->pc = 0x7C10E4u;
            goto label_7c10e4;
        }
    }
    ctx->pc = 0x7C10A4u;
    // 0x7c10a4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C10A4u;
    {
        const bool branch_taken_0x7c10a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C10A4u;
        // 0x7c10a8: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c10a4) {
            ctx->pc = 0x7C10D4u;
            goto label_7c10d4;
        }
    }
    ctx->pc = 0x7C10ACu;
    // 0x7c10ac: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c10acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c10b0: 0x26101500  addiu       $s0, $s0, 0x1500
    ctx->pc = 0x7c10b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5376));
    // 0x7c10b4: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c10b8: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x7c10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x7c10bc: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x7C10BCu;
    SET_GPR_U32(ctx, 31, 0x7C10C4u);
    ctx->pc = 0x7C10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C10BCu;
    // 0x7c10c0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x7C10BCu, 0x7C10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C10C4u;
label_7c10c4:
    // 0x7c10c4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c10c8: 0x24631498  addiu       $v1, $v1, 0x1498
    ctx->pc = 0x7c10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5272));
    // 0x7c10cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C10CCu;
    {
        const bool branch_taken_0x7c10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C10CCu;
        // 0x7c10d0: 0xae0300ec  sw          $v1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c10cc) {
            ctx->pc = 0x7C10E4u;
            goto label_7c10e4;
        }
    }
    ctx->pc = 0x7C10D4u;
label_7c10d4:
    // 0x7c10d4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c10d8: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c10dc: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c10e0: 0xac6215ec  sw          $v0, 0x15EC($v1)
    ctx->pc = 0x7c10e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D15ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D15ECu, _value); } while (0);
label_7c10e4:
    // 0x7c10e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c10e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c10e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c10e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c10ec: 0x3e00008  jr          $ra
    ctx->pc = 0x7C10ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C10ECu;
        // 0x7c10f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C10ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C10F4u;
    // 0x7c10f4: 0x0  nop
    ctx->pc = 0x7c10f4u;
    // NOP
    ctx->pc = 0x7c10f8u;
}
} // namespace gh_mcport
