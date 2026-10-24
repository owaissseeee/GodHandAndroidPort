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

// Function: cDamageGive_SetDmgGiveHitVec
// Address: 0x1fd308 - 0x1fd338
void cDamageGive_SetDmgGiveHitVec_0x1fd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageGive_SetDmgGiveHitVec_0x1fd308");
#endif

    ctx->pc = 0x1fd308u;

    // 0x1fd308: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fd30c: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD30Cu;
    {
        const bool branch_taken_0x1fd30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1fd30c) {
            ctx->pc = 0x1FD32Cu;
            goto label_1fd32c;
        }
    }
    ctx->pc = 0x1FD314u;
    // 0x1fd314: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1fd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd318: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1fd318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1fd31c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1fd31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd320: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1fd320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fd324: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1fd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd328: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1fd328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1fd32c:
    // 0x1fd32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD334u;
    // 0x1fd334: 0x0  nop
    ctx->pc = 0x1fd334u;
    // NOP
    ctx->pc = 0x1fd338u;
}
