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

// Function: func_0035B8C0
// Address: 0x35b8c0 - 0x35b9b0
void func_0035B8C0_0x35b8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B8C0_0x35b8c0");
#endif

    ctx->pc = 0x35b8c0u;

    // 0x35b8c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x35b8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8c4: 0xc4e10ac4  lwc1        $f1, 0xAC4($a3)
    ctx->pc = 0x35b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35b8c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35b8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35b8cc: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x35b8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x35b8d0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x35b8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b8d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x35B8D4u;
    {
        const bool branch_taken_0x35b8d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8D4u;
        // 0x35b8d8: 0x24e60d30  addiu       $a2, $a3, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8d4) {
            ctx->pc = 0x35B8E8u;
            goto label_35b8e8;
        }
    }
    ctx->pc = 0x35B8DCu;
    // 0x35b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x35B8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8DCu;
        // 0x35b8e0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B8E4u;
    // 0x35b8e4: 0x0  nop
    ctx->pc = 0x35b8e4u;
    // NOP
label_35b8e8:
    // 0x35b8e8: 0x46016801  sub.s       $f0, $f13, $f1
    ctx->pc = 0x35b8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x35b8ec: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x35b8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b8f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x35B8F0u;
    {
        const bool branch_taken_0x35b8f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8F0u;
        // 0x35b8f4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8f0) {
            ctx->pc = 0x35B930u;
            goto label_35b930;
        }
    }
    ctx->pc = 0x35B8F8u;
    // 0x35b8f8: 0xc4c002c8  lwc1        $f0, 0x2C8($a2)
    ctx->pc = 0x35b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35b8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b900: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x35b900u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b904: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x35B904u;
    {
        const bool branch_taken_0x35b904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B904u;
        // 0x35b908: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b904) {
            ctx->pc = 0x35B9A4u;
            goto label_35b9a4;
        }
    }
    ctx->pc = 0x35B90Cu;
    // 0x35b90c: 0xc4c002c0  lwc1        $f0, 0x2C0($a2)
    ctx->pc = 0x35b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35b910: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x35b910u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b914: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x35B914u;
    {
        const bool branch_taken_0x35b914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35b914) {
            ctx->pc = 0x35B9A4u;
            goto label_35b9a4;
        }
    }
    ctx->pc = 0x35B91Cu;
    // 0x35b91c: 0x8cc202bc  lw          $v0, 0x2BC($a2)
    ctx->pc = 0x35b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
    // 0x35b920: 0xe4cc02c0  swc1        $f12, 0x2C0($a2)
    ctx->pc = 0x35b920u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 704), bits); }
    // 0x35b924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b928: 0x3e00008  jr          $ra
    ctx->pc = 0x35B928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B928u;
        // 0x35b92c: 0xacc202bc  sw          $v0, 0x2BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B930u;
label_35b930:
    // 0x35b930: 0x3404ea24  ori         $a0, $zero, 0xEA24
    ctx->pc = 0x35b930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x35b934: 0x8c43e278  lw          $v1, -0x1D88($v0)
    ctx->pc = 0x35b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959736)));
    // 0x35b938: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B938u;
    {
        const bool branch_taken_0x35b938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B938u;
        // 0x35b93c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b938) {
            ctx->pc = 0x35B95Cu;
            goto label_35b95c;
        }
    }
    ctx->pc = 0x35B940u;
    // 0x35b940: 0x8ce20920  lw          $v0, 0x920($a3)
    ctx->pc = 0x35b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2336)));
    // 0x35b944: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x35b944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35b948: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B948u;
    {
        const bool branch_taken_0x35b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b948) {
            ctx->pc = 0x35B94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B948u;
            // 0x35b94c: 0x8cc202bc  lw          $v0, 0x2BC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B960u;
            goto label_35b960;
        }
    }
    ctx->pc = 0x35B950u;
    // 0x35b950: 0x8cc202ac  lw          $v0, 0x2AC($a2)
    ctx->pc = 0x35b950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 684)));
    // 0x35b954: 0x384203e8  xori        $v0, $v0, 0x3E8
    ctx->pc = 0x35b954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1000);
    // 0x35b958: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x35b958u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35b95c:
    // 0x35b95c: 0x8cc202bc  lw          $v0, 0x2BC($a2)
    ctx->pc = 0x35b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
label_35b960:
    // 0x35b960: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x35b960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35b964: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B964u;
    {
        const bool branch_taken_0x35b964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b964) {
            ctx->pc = 0x35B978u;
            goto label_35b978;
        }
    }
    ctx->pc = 0x35B96Cu;
    // 0x35b96c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35B96Cu;
    {
        const bool branch_taken_0x35b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B96Cu;
        // 0x35b970: 0x8cc202c4  lw          $v0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b96c) {
            ctx->pc = 0x35B990u;
            goto label_35b990;
        }
    }
    ctx->pc = 0x35B974u;
    // 0x35b974: 0x0  nop
    ctx->pc = 0x35b974u;
    // NOP
label_35b978:
    // 0x35b978: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x35b978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35b97c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x35B97Cu;
    {
        const bool branch_taken_0x35b97c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B97Cu;
        // 0x35b980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b97c) {
            ctx->pc = 0x35B990u;
            goto label_35b990;
        }
    }
    ctx->pc = 0x35B984u;
    // 0x35b984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35B984u;
    {
        const bool branch_taken_0x35b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B984u;
        // 0x35b988: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b984) {
            ctx->pc = 0x35B994u;
            goto label_35b994;
        }
    }
    ctx->pc = 0x35B98Cu;
    // 0x35b98c: 0x0  nop
    ctx->pc = 0x35b98cu;
    // NOP
label_35b990:
    // 0x35b990: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x35b990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_35b994:
    // 0x35b994: 0xacc002bc  sw          $zero, 0x2BC($a2)
    ctx->pc = 0x35b994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 700), GPR_U32(ctx, 0));
    // 0x35b998: 0xe4cc02c8  swc1        $f12, 0x2C8($a2)
    ctx->pc = 0x35b998u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 712), bits); }
    // 0x35b99c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35b9a0: 0xacc202c4  sw          $v0, 0x2C4($a2)
    ctx->pc = 0x35b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 708), GPR_U32(ctx, 2));
label_35b9a4:
    // 0x35b9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B9ACu;
    // 0x35b9ac: 0x0  nop
    ctx->pc = 0x35b9acu;
    // NOP
    ctx->pc = 0x35b9b0u;
}
