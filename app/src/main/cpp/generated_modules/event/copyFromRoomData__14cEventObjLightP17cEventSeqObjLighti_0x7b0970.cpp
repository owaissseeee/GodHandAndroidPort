#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: copyFromRoomData__14cEventObjLightP17cEventSeqObjLighti
// Address: 0x7b0970 - 0x7b09a8
void copyFromRoomData__14cEventObjLightP17cEventSeqObjLighti_0x7b0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromRoomData__14cEventObjLightP17cEventSeqObjLighti_0x7b0970");
#endif

    ctx->pc = 0x7b0970u;

    // 0x7b0970: 0x28c40020  slti        $a0, $a2, 0x20
    ctx->pc = 0x7b0970u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x7b0974: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x7b0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x7b0978: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x7b0978u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x7b097c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x7b097cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x7b0980: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x7b0980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x7b0984: 0x2463a400  addiu       $v1, $v1, -0x5C00
    ctx->pc = 0x7b0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943744));
    // 0x7b0988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7b0988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7b098c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x7b098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b0990: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x7b0990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x7b0994: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x7b0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b0998: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x7b0998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x7b099c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x7b099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b09a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B09A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B09A0u;
        // 0x7b09a4: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B09A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B09A8u;
}
} // namespace gh_event
