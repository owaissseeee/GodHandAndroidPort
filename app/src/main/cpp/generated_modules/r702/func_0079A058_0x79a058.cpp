#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_0079A058
// Address: 0x79a058 - 0x79a0d0
void func_0079A058_0x79a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A058_0x79a058");
#endif

    ctx->pc = 0x79a058u;

    // 0x79a058: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79a05c: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x79A05Cu;
    {
        const bool branch_taken_0x79a05c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79a05c) {
            ctx->pc = 0x79A0C8u;
            goto label_79a0c8;
        }
    }
    ctx->pc = 0x79A064u;
    // 0x79a064: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x79A064u;
    {
        const bool branch_taken_0x79a064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A064u;
        // 0x79a068: 0x3c04007a  lui         $a0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a064) {
            ctx->pc = 0x79A0C8u;
            goto label_79a0c8;
        }
    }
    ctx->pc = 0x79A06Cu;
    // 0x79a06c: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
    // 0x79a070: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x79a074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a07c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a080: 0x2482a390  addiu       $v0, $a0, -0x5C70
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943632));
    // 0x79a084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x79a084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a088: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a08c: 0xe481a390  swc1        $f1, -0x5C70($a0)
    ctx->pc = 0x79a08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294943632), bits); }
    // 0x79a090: 0x24a3a380  addiu       $v1, $a1, -0x5C80
    ctx->pc = 0x79a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    // 0x79a094: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x79a094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79a098: 0xe4a0a380  swc1        $f0, -0x5C80($a1)
    ctx->pc = 0x79a098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A380u, _value); } while (0); }
    // 0x79a09c: 0x3c01409d  lui         $at, 0x409D
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16541 << 16));
    // 0x79a0a0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x79a0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x79a0a4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a0a8: 0x3c014127  lui         $at, 0x4127
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16679 << 16));
    // 0x79a0ac: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79a0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x79a0b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a0b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A388u, _value); } while (0); }
    // 0x79a0b8: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x79a0b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A38Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A38Cu, _value); } while (0); }
    // 0x79a0bc: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x79a0bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79a0c0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x79a0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79a0c4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x79a0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79A384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79A384u, _value); } while (0); }
label_79a0c8:
    // 0x79a0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A0D0u;
}
} // namespace gh_r702
