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

// Function: tanf
// Address: 0x3a1ae8 - 0x3a1b78
void tanf_0x3a1ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("tanf_0x3a1ae8");
#endif

    switch (ctx->pc) {
        case 0x3a1b44u: goto label_3a1b44;
        case 0x3a1b64u: goto label_3a1b64;
        default: break;
    }

    ctx->pc = 0x3a1ae8u;

    // 0x3a1ae8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a1ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a1aec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a1af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1af4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a1af8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a1afc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x3a1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x3a1b00: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a1b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a1b04: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x3a1b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x3a1b08: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a1b0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1B0Cu;
    {
        const bool branch_taken_0x3a1b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B0Cu;
        // 0x3a1b10: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b0c) {
            ctx->pc = 0x3A1B20u;
            goto label_3a1b20;
        }
    }
    ctx->pc = 0x3A1B14u;
    // 0x3a1b14: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3a1b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a1b18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A1B18u;
    {
        const bool branch_taken_0x3a1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B18u;
        // 0x3a1b1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b18) {
            ctx->pc = 0x3A1B5Cu;
            goto label_3a1b5c;
        }
    }
    ctx->pc = 0x3A1B20u;
label_3a1b20:
    // 0x3a1b20: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x3a1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x3a1b24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1b28: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a1b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a1b2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A1B2Cu;
    {
        const bool branch_taken_0x3a1b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1b2c) {
            ctx->pc = 0x3A1B3Cu;
            goto label_3a1b3c;
        }
    }
    ctx->pc = 0x3A1B34u;
    // 0x3a1b34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A1B34u;
    {
        const bool branch_taken_0x3a1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B34u;
        // 0x3a1b38: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1b34) {
            ctx->pc = 0x3A1B64u;
            goto label_3a1b64;
        }
    }
    ctx->pc = 0x3A1B3Cu;
label_3a1b3c:
    // 0x3a1b3c: 0xc0e8dda  jal         func_3A3768
    ctx->pc = 0x3A1B3Cu;
    SET_GPR_U32(ctx, 31, 0x3A1B44u);
    ctx->pc = 0x3A1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1B3Cu;
    // 0x3a1b40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3768u, 0x3A1B3Cu, 0x3A1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B44u;
label_3a1b44:
    // 0x3a1b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a1b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a1b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a1b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1b4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3a1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3a1b50: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x3a1b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3a1b54: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x3a1b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3a1b58: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3a1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3a1b5c:
    // 0x3a1b5c: 0xc0e920c  jal         func_3A4830
    ctx->pc = 0x3A1B5Cu;
    SET_GPR_U32(ctx, 31, 0x3A1B64u);
    ctx->pc = 0x3A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4830u, 0x3A1B5Cu, 0x3A1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1B64u;
label_3a1b64:
    // 0x3a1b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1b68: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1B68u;
        // 0x3a1b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1B70u;
    // 0x3a1b70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3a1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3a1b74: 0x0  nop
    ctx->pc = 0x3a1b74u;
    // NOP
    ctx->pc = 0x3a1b78u;
}
