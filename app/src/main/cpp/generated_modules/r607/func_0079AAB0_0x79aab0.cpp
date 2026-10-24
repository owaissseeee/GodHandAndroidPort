#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079AAB0
// Address: 0x79aab0 - 0x79ab70
void func_0079AAB0_0x79aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AAB0_0x79aab0");
#endif

    ctx->pc = 0x79aab0u;

    // 0x79aab0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79aab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79aab4: 0x14a2002b  bne         $a1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x79AAB4u;
    {
        const bool branch_taken_0x79aab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79aab4) {
            ctx->pc = 0x79AB64u;
            goto label_79ab64;
        }
    }
    ctx->pc = 0x79AABCu;
    // 0x79aabc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79AABCu;
    {
        const bool branch_taken_0x79aabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AABCu;
        // 0x79aac0: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aabc) {
            ctx->pc = 0x79AB64u;
            goto label_79ab64;
        }
    }
    ctx->pc = 0x79AAC4u;
    // 0x79aac4: 0x3c014209  lui         $at, 0x4209
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16905 << 16));
    // 0x79aac8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x79aac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x79aacc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79aaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79aad0: 0x3c01c096  lui         $at, 0xC096
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49302 << 16));
    // 0x79aad4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x79aad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79aad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79aadc: 0x2462b740  addiu       $v0, $v1, -0x48C0
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948672));
    // 0x79aae0: 0xe461b740  swc1        $f1, -0x48C0($v1)
    ctx->pc = 0x79aae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294948672), bits); }
    // 0x79aae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79aae8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79aae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79aaec: 0x3c01c217  lui         $at, 0xC217
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49687 << 16));
    // 0x79aaf0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79aaf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x79aaf4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79aaf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79aaf8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79aaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79aafc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79aafcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab00: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ab00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79ab04: 0x3c014243  lui         $at, 0x4243
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16963 << 16));
    // 0x79ab08: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x79ab08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x79ab0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ab0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ab10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79ab14: 0x3c0141ca  lui         $at, 0x41CA
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16842 << 16));
    // 0x79ab18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79ab18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79ab1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ab20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79ab24: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x79ab24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab28: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79ab28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x79ab2c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ab2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79ab30: 0x3c014258  lui         $at, 0x4258
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16984 << 16));
    // 0x79ab34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79ab34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79ab38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79ab38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79ab3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x79ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x79ab40: 0x3c01c208  lui         $at, 0xC208
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49672 << 16));
    // 0x79ab44: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79ab44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79ab48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ab48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ab4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79ab50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ab50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79ab54: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x79ab54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79ab58: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x79ab58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x79ab5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79ab5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab60: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79ab60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ab64:
    // 0x79ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB6Cu;
    // 0x79ab6c: 0x0  nop
    ctx->pc = 0x79ab6cu;
    // NOP
    ctx->pc = 0x79ab70u;
}
} // namespace gh_r607
