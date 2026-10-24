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

// Function: Setup_00309028_309028
// Address: 0x309028 - 0x3090f8
void Setup_00309028_309028_0x309028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup_00309028_309028_0x309028");
#endif

    switch (ctx->pc) {
        case 0x309044u: goto label_309044;
        default: break;
    }

    ctx->pc = 0x309028u;

    // 0x309028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30902c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30902cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x309030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x309034: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x309034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x309038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30903c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x30903Cu;
    SET_GPR_U32(ctx, 31, 0x309044u);
    ctx->pc = 0x309040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30903Cu;
    // 0x309040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x30903Cu, 0x309044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309044u;
label_309044:
    // 0x309044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x309048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30904c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x30904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x309050: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x309050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x309054: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x309054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x309058: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x309058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x30905c: 0xa203008d  sb          $v1, 0x8D($s0)
    ctx->pc = 0x30905cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 3));
    // 0x309060: 0xa604008e  sh          $a0, 0x8E($s0)
    ctx->pc = 0x309060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 4));
    // 0x309064: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x309064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x309068: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x309068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x30906c: 0xa60000a4  sh          $zero, 0xA4($s0)
    ctx->pc = 0x30906cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x309070: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x309070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x309074: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x309074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x309078: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x309078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x30907c: 0xa60000a2  sh          $zero, 0xA2($s0)
    ctx->pc = 0x30907cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x309080: 0xa60000a6  sh          $zero, 0xA6($s0)
    ctx->pc = 0x309080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 0));
    // 0x309084: 0xa60000a8  sh          $zero, 0xA8($s0)
    ctx->pc = 0x309084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x309088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x309088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30908c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30908cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309090: 0x3e00008  jr          $ra
    ctx->pc = 0x309090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309090u;
        // 0x309094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309098u;
    // 0x309098: 0x0  nop
    ctx->pc = 0x309098u;
    // NOP
    // 0x30909c: 0x0  nop
    ctx->pc = 0x30909cu;
    // NOP
    // 0x3090a0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3090a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3090a4: 0x0  nop
    ctx->pc = 0x3090a4u;
    // NOP
    // 0x3090a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3090a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3090ac: 0x0  nop
    ctx->pc = 0x3090acu;
    // NOP
    // 0x3090b0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3090b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3090b4: 0x0  nop
    ctx->pc = 0x3090b4u;
    // NOP
    // 0x3090b8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3090b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3090bc: 0x0  nop
    ctx->pc = 0x3090bcu;
    // NOP
    // 0x3090c0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3090c0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3090c4: 0x0  nop
    ctx->pc = 0x3090c4u;
    // NOP
    // 0x3090c8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3090c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090cc: 0x0  nop
    ctx->pc = 0x3090ccu;
    // NOP
    // 0x3090d0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3090d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3090d4: 0x0  nop
    ctx->pc = 0x3090d4u;
    // NOP
    // 0x3090d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3090d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3090dc: 0x0  nop
    ctx->pc = 0x3090dcu;
    // NOP
    // 0x3090e0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3090e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3090e4: 0x0  nop
    ctx->pc = 0x3090e4u;
    // NOP
    // 0x3090e8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3090e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3090ec: 0x0  nop
    ctx->pc = 0x3090ecu;
    // NOP
    // 0x3090f0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x3090f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x3090f4: 0x0  nop
    ctx->pc = 0x3090f4u;
    // NOP
    ctx->pc = 0x3090f8u;
}
