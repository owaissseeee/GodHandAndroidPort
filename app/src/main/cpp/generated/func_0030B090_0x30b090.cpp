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

// Function: func_0030B090
// Address: 0x30b090 - 0x30b148
void func_0030B090_0x30b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B090_0x30b090");
#endif

    ctx->pc = 0x30b090u;

    // 0x30b090: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30b090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30b094: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x30b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x30b098: 0x24457a2c  addiu       $a1, $v0, 0x7A2C
    ctx->pc = 0x30b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x30b09c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x30b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A3Cu));
    // 0x30b0a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30b0a4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x30B0A4u;
    {
        const bool branch_taken_0x30b0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0a4) {
            ctx->pc = 0x30B140u;
            goto label_30b140;
        }
    }
    ctx->pc = 0x30B0ACu;
    // 0x30b0ac: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x30b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x30b0b0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x30b0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x30b0b4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30B0B4u;
    {
        const bool branch_taken_0x30b0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0B4u;
        // 0x30b0b8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0b4) {
            ctx->pc = 0x30B140u;
            goto label_30b140;
        }
    }
    ctx->pc = 0x30B0BCu;
    // 0x30b0bc: 0x24a4fa74  addiu       $a0, $a1, -0x58C
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965876));
    // 0x30b0c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30B0C0u;
    {
        const bool branch_taken_0x30b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B0C0u;
        // 0x30b0c4: 0x2403090f  addiu       $v1, $zero, 0x90F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2319));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b0c0) {
            ctx->pc = 0x30B0CCu;
            goto label_30b0cc;
        }
    }
    ctx->pc = 0x30B0C8u;
    // 0x30b0c8: 0xac8005a0  sw          $zero, 0x5A0($a0)
    ctx->pc = 0x30b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 0));
label_30b0cc:
    // 0x30b0cc: 0x8ca2fa74  lw          $v0, -0x58C($a1)
    ctx->pc = 0x30b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965876)));
    // 0x30b0d0: 0x3042090f  andi        $v0, $v0, 0x90F
    ctx->pc = 0x30b0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2319);
    // 0x30b0d4: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30B0D4u;
    {
        const bool branch_taken_0x30b0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30b0d4) {
            ctx->pc = 0x30B0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B0D4u;
            // 0x30b0d8: 0x8ca2fff8  lw          $v0, -0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B130u;
            goto label_30b130;
        }
    }
    ctx->pc = 0x30B0DCu;
    // 0x30b0dc: 0x8c8205a0  lw          $v0, 0x5A0($a0)
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x30b0e0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x30b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x30b0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30b0e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30b0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b0f0: 0x0  nop
    ctx->pc = 0x30b0f0u;
    // NOP
    // 0x30b0f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30b0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30b0f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30b0f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30b0fc: 0x0  nop
    ctx->pc = 0x30b0fcu;
    // NOP
    // 0x30b100: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x30B100u;
    {
        const bool branch_taken_0x30b100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B100u;
        // 0x30b104: 0xac8205a0  sw          $v0, 0x5A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b100) {
            ctx->pc = 0x30B140u;
            goto label_30b140;
        }
    }
    ctx->pc = 0x30B108u;
    // 0x30b108: 0x8ca3fff8  lw          $v1, -0x8($a1)
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x30b10c: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x30b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x30b110: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30B110u;
    {
        const bool branch_taken_0x30b110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B110u;
        // 0x30b114: 0x34628000  ori         $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b110) {
            ctx->pc = 0x30B140u;
            goto label_30b140;
        }
    }
    ctx->pc = 0x30B118u;
    // 0x30b118: 0xaca2fff8  sw          $v0, -0x8($a1)
    ctx->pc = 0x30b118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 2));
    // 0x30b11c: 0xac8005a0  sw          $zero, 0x5A0($a0)
    ctx->pc = 0x30b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 0));
    // 0x30b120: 0x8ca2fff8  lw          $v0, -0x8($a1)
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x30b124: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x30b128: 0x3e00008  jr          $ra
    ctx->pc = 0x30B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B128u;
        // 0x30b12c: 0xaca2fff8  sw          $v0, -0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B130u;
label_30b130:
    // 0x30b130: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x30b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x30b134: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30b134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30b138: 0xaca2fff8  sw          $v0, -0x8($a1)
    ctx->pc = 0x30b138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 2));
    // 0x30b13c: 0xac8005a0  sw          $zero, 0x5A0($a0)
    ctx->pc = 0x30b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 0));
label_30b140:
    // 0x30b140: 0x3e00008  jr          $ra
    ctx->pc = 0x30B140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B148u;
}
