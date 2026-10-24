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

// Function: func_002009E8
// Address: 0x2009e8 - 0x200a90
void func_002009E8_0x2009e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002009E8_0x2009e8");
#endif

    switch (ctx->pc) {
        case 0x200a10u: goto label_200a10;
        default: break;
    }

    ctx->pc = 0x2009e8u;

    // 0x2009e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2009e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2009ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2009ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2009f0: 0x14a20024  bne         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2009F0u;
    {
        const bool branch_taken_0x2009f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2009F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009F0u;
        // 0x2009f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009f0) {
            ctx->pc = 0x200A84u;
            goto label_200a84;
        }
    }
    ctx->pc = 0x2009F8u;
    // 0x2009f8: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2009F8u;
    {
        const bool branch_taken_0x2009f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009F8u;
        // 0x2009fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009f8) {
            ctx->pc = 0x200A88u;
            goto label_200a88;
        }
    }
    ctx->pc = 0x200A00u;
    // 0x200a00: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x200a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x200a04: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x200a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x200a08: 0xc0afa5a  jal         func_2BE968
    ctx->pc = 0x200A08u;
    SET_GPR_U32(ctx, 31, 0x200A10u);
    ctx->pc = 0x200A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A08u;
    // 0x200a0c: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE968u, 0x200A08u, 0x200A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A10u;
label_200a10:
    // 0x200a10: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x200a14: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x200a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x200a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200a1c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x200a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x200a20: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x200a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x200a24: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x200a24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x200a28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a2c: 0x24623f00  addiu       $v0, $v1, 0x3F00
    ctx->pc = 0x200a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16128));
    // 0x200a30: 0x3c01c251  lui         $at, 0xC251
    ctx->pc = 0x200a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49745 << 16));
    // 0x200a34: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x200a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x200a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200a3c: 0xe4623f00  swc1        $f2, 0x3F00($v1)
    ctx->pc = 0x200a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F00u, _value); } while (0); }
    // 0x200a40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x200a44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x200a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x200a48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x200a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F04u, _value); } while (0); }
    // 0x200a4c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x200a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F08u, _value); } while (0); }
    // 0x200a50: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x200a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F0Cu, _value); } while (0); }
    // 0x200a54: 0x3c01c240  lui         $at, 0xC240
    ctx->pc = 0x200a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49728 << 16));
    // 0x200a58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200a5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x200a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x200a60: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x200a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x200a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a68: 0x3c01c265  lui         $at, 0xC265
    ctx->pc = 0x200a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49765 << 16));
    // 0x200a6c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x200a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x200a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200a74: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x200a74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F1Cu, _value); } while (0); }
    // 0x200a78: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x200a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F10u, _value); } while (0); }
    // 0x200a7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x200a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F14u, _value); } while (0); }
    // 0x200a80: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x200a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x583F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x583F18u, _value); } while (0); }
label_200a84:
    // 0x200a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200a88:
    // 0x200a88: 0x3e00008  jr          $ra
    ctx->pc = 0x200A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200A88u;
        // 0x200a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200A90u;
}
