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
// Function: func_007C71C0
// Address: 0x7c71c0 - 0x7c7228
void func_007C71C0_0x7c71c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007C71C0_0x7c71c0");
#endif

    switch (ctx->pc) {
        case 0x7c71f4u: goto label_7c71f4;
        default: break;
    }

    ctx->pc = 0x7c71c0u;

    // 0x7c71c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c71c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c71c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7c71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7c71c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c71c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c71cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C71CCu;
    {
        const bool branch_taken_0x7c71cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C71CCu;
        // 0x7c71d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c71cc) {
            ctx->pc = 0x7C7214u;
            goto label_7c7214;
        }
    }
    ctx->pc = 0x7C71D4u;
    // 0x7c71d4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C71D4u;
    {
        const bool branch_taken_0x7c71d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C71D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C71D4u;
        // 0x7c71d8: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c71d4) {
            ctx->pc = 0x7C7204u;
            goto label_7c7204;
        }
    }
    ctx->pc = 0x7C71DCu;
    // 0x7c71dc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c71e0: 0x26101800  addiu       $s0, $s0, 0x1800
    ctx->pc = 0x7c71e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6144));
    // 0x7c71e4: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c71e8: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x7c71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x7c71ec: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x7C71ECu;
    SET_GPR_U32(ctx, 31, 0x7C71F4u);
    ctx->pc = 0x7C71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C71ECu;
    // 0x7c71f0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x7C71ECu, 0x7C71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C71F4u;
label_7c71f4:
    // 0x7c71f4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c71f8: 0x246314e0  addiu       $v1, $v1, 0x14E0
    ctx->pc = 0x7c71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5344));
    // 0x7c71fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C71FCu;
    {
        const bool branch_taken_0x7c71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C71FCu;
        // 0x7c7200: 0xae0300ec  sw          $v1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c71fc) {
            ctx->pc = 0x7C7214u;
            goto label_7c7214;
        }
    }
    ctx->pc = 0x7C7204u;
label_7c7204:
    // 0x7c7204: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c7204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c7208: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c7208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c720c: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c7210: 0xac6218ec  sw          $v0, 0x18EC($v1)
    ctx->pc = 0x7c7210u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D18ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D18ECu, _value); } while (0);
label_7c7214:
    // 0x7c7214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c7214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c7218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c721c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C721Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C721Cu;
        // 0x7c7220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C721Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7224u;
    // 0x7c7224: 0x0  nop
    ctx->pc = 0x7c7224u;
    // NOP
    ctx->pc = 0x7c7228u;
}
} // namespace gh_mcport
