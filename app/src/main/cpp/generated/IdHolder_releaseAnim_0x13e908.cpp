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

// Function: IdHolder_releaseAnim
// Address: 0x13e908 - 0x13e970
void IdHolder_releaseAnim_0x13e908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdHolder_releaseAnim_0x13e908");
#endif

    switch (ctx->pc) {
        case 0x13e92cu: goto label_13e92c;
        default: break;
    }

    ctx->pc = 0x13e908u;

    // 0x13e908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e90c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e918: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x13e918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x13e91c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E91Cu;
    {
        const bool branch_taken_0x13e91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e91c) {
            ctx->pc = 0x13E944u;
            goto label_13e944;
        }
    }
    ctx->pc = 0x13E924u;
    // 0x13e924: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x13E924u;
    SET_GPR_U32(ctx, 31, 0x13E92Cu);
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x13E924u, 0x13E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E92Cu;
label_13e92c:
    // 0x13e92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e934: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x13e934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x13e938: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x13e938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x13e93c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x13e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x13e940: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x13e940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_13e944:
    // 0x13e944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e94c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x13e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x13e950: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x13e950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x13e954: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x13e954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x13e958: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x13e958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x13e95c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e964: 0x3e00008  jr          $ra
    ctx->pc = 0x13E964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E964u;
        // 0x13e968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E96Cu;
    // 0x13e96c: 0x0  nop
    ctx->pc = 0x13e96cu;
    // NOP
    ctx->pc = 0x13e970u;
}
