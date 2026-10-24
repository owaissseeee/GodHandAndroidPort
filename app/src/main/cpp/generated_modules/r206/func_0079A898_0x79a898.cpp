#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A898
// Address: 0x79a898 - 0x79a928
void func_0079A898_0x79a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A898_0x79a898");
#endif

    ctx->pc = 0x79a898u;

    // 0x79a898: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79a89c: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A89Cu;
    {
        const bool branch_taken_0x79a89c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79a89c) {
            ctx->pc = 0x79A91Cu;
            goto label_79a91c;
        }
    }
    ctx->pc = 0x79A8A4u;
    // 0x79a8a4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A8A4u;
    {
        const bool branch_taken_0x79a8a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A4u;
        // 0x79a8a8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a4) {
            ctx->pc = 0x79A91Cu;
            goto label_79a91c;
        }
    }
    ctx->pc = 0x79A8ACu;
    // 0x79a8ac: 0x3c01c1e2  lui         $at, 0xC1E2
    ctx->pc = 0x79a8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49634 << 16));
    // 0x79a8b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a8b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a8b8: 0x3c01c113  lui         $at, 0xC113
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49427 << 16));
    // 0x79a8bc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a8c4: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79a8c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a8cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a8d0: 0x2482ac90  addiu       $v0, $a0, -0x5370
    ctx->pc = 0x79a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
    // 0x79a8d4: 0xe4a1ac80  swc1        $f1, -0x5380($a1)
    ctx->pc = 0x79a8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294945920), bits); }
    // 0x79a8d8: 0x24a3ac80  addiu       $v1, $a1, -0x5380
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945920));
    // 0x79a8dc: 0xe480ac90  swc1        $f0, -0x5370($a0)
    ctx->pc = 0x79a8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79AC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79AC90u, _value); } while (0); }
    // 0x79a8e0: 0x3c01420b  lui         $at, 0x420B
    ctx->pc = 0x79a8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16907 << 16));
    // 0x79a8e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a8e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a8ec: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x79a8ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79AC9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79AC9Cu, _value); } while (0); }
    // 0x79a8f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79a8f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a8f8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a8fc: 0x3c0141df  lui         $at, 0x41DF
    ctx->pc = 0x79a8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16863 << 16));
    // 0x79a900: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79a900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x79a904: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a908: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x79a908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x79a90c: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x79a90cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x79a910: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x79a910u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79AC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79AC94u, _value); } while (0); }
    // 0x79a914: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x79a914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x79AC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79AC98u, _value); } while (0); }
    // 0x79a918: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x79a918u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_79a91c:
    // 0x79a91c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A924u;
    // 0x79a924: 0x0  nop
    ctx->pc = 0x79a924u;
    // NOP
    ctx->pc = 0x79a928u;
}
} // namespace gh_r206
