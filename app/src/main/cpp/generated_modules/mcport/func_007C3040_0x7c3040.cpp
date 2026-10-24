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
// Function: func_007C3040
// Address: 0x7c3040 - 0x7c30a8
void func_007C3040_0x7c3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007C3040_0x7c3040");
#endif

    switch (ctx->pc) {
        case 0x7c3074u: goto label_7c3074;
        default: break;
    }

    ctx->pc = 0x7c3040u;

    // 0x7c3040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3044: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7c3044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7c3048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c304c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7C304Cu;
    {
        const bool branch_taken_0x7c304c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C304Cu;
        // 0x7c3050: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c304c) {
            ctx->pc = 0x7C3094u;
            goto label_7c3094;
        }
    }
    ctx->pc = 0x7C3054u;
    // 0x7c3054: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C3054u;
    {
        const bool branch_taken_0x7c3054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3054u;
        // 0x7c3058: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3054) {
            ctx->pc = 0x7C3084u;
            goto label_7c3084;
        }
    }
    ctx->pc = 0x7C305Cu;
    // 0x7c305c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c3060: 0x26101600  addiu       $s0, $s0, 0x1600
    ctx->pc = 0x7c3060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5632));
    // 0x7c3064: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c3064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c3068: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x7c3068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x7c306c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x7C306Cu;
    SET_GPR_U32(ctx, 31, 0x7C3074u);
    ctx->pc = 0x7C3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C306Cu;
    // 0x7c3070: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x7C306Cu, 0x7C3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3074u;
label_7c3074:
    // 0x7c3074: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c3074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c3078: 0x246314c8  addiu       $v1, $v1, 0x14C8
    ctx->pc = 0x7c3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x7c307c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C307Cu;
    {
        const bool branch_taken_0x7c307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C307Cu;
        // 0x7c3080: 0xae0300ec  sw          $v1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c307c) {
            ctx->pc = 0x7C3094u;
            goto label_7c3094;
        }
    }
    ctx->pc = 0x7C3084u;
label_7c3084:
    // 0x7c3084: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c3084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c3088: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7c3088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7c308c: 0x244214b0  addiu       $v0, $v0, 0x14B0
    ctx->pc = 0x7c308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5296));
    // 0x7c3090: 0xac6216ec  sw          $v0, 0x16EC($v1)
    ctx->pc = 0x7c3090u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D16ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D16ECu, _value); } while (0);
label_7c3094:
    // 0x7c3094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c3094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c309c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C309Cu;
        // 0x7c30a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C30A4u;
    // 0x7c30a4: 0x0  nop
    ctx->pc = 0x7c30a4u;
    // NOP
    ctx->pc = 0x7c30a8u;
}
} // namespace gh_mcport
