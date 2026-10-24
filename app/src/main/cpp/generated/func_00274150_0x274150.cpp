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

// Function: func_00274150
// Address: 0x274150 - 0x274238
void func_00274150_0x274150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00274150_0x274150");
#endif

    switch (ctx->pc) {
        case 0x274200u: goto label_274200;
        default: break;
    }

    ctx->pc = 0x274150u;

    // 0x274150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274154: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x274154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x274158: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x274158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27415c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x27415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x274160: 0x94637a50  lhu         $v1, 0x7A50($v1)
    ctx->pc = 0x274160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x274164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274168: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274168u;
    {
        const bool branch_taken_0x274168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274168u;
        // 0x27416c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274168) {
            ctx->pc = 0x27417Cu;
            goto label_27417c;
        }
    }
    ctx->pc = 0x274170u;
    // 0x274170: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x274174: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x274174u;
    {
        const bool branch_taken_0x274174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x274178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274174u;
        // 0x274178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274174) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x27417Cu;
label_27417c:
    // 0x27417c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x27417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x274180: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x274180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x274184: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x274184u;
    {
        const bool branch_taken_0x274184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274184u;
        // 0x274188: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274184) {
            ctx->pc = 0x27420Cu;
            goto label_27420c;
        }
    }
    ctx->pc = 0x27418Cu;
    // 0x27418c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27418Cu;
    {
        const bool branch_taken_0x27418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27418Cu;
        // 0x274190: 0x28620224  slti        $v0, $v1, 0x224 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)548) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27418c) {
            ctx->pc = 0x2741C0u;
            goto label_2741c0;
        }
    }
    ctx->pc = 0x274194u;
    // 0x274194: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x274194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x274198: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x274198u;
    {
        const bool branch_taken_0x274198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274198) {
            ctx->pc = 0x27419Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274198u;
            // 0x27419c: 0xc6011734  lwc1        $f1, 0x1734($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2741D4u;
            goto label_2741d4;
        }
    }
    ctx->pc = 0x2741A0u;
    // 0x2741a0: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2741a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x2741a4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2741A4u;
    {
        const bool branch_taken_0x2741a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2741A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741A4u;
        // 0x2741a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741a4) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x2741ACu;
    // 0x2741ac: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2741acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x2741b0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2741B0u;
    {
        const bool branch_taken_0x2741b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2741B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741B0u;
        // 0x2741b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741b0) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x2741B8u;
    // 0x2741b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2741B8u;
    {
        const bool branch_taken_0x2741b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741B8u;
        // 0x2741bc: 0xc6011734  lwc1        $f1, 0x1734($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741b8) {
            ctx->pc = 0x2741D4u;
            goto label_2741d4;
        }
    }
    ctx->pc = 0x2741C0u;
label_2741c0:
    // 0x2741c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2741C0u;
    {
        const bool branch_taken_0x2741c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C0u;
        // 0x2741c4: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741c0) {
            ctx->pc = 0x2741D0u;
            goto label_2741d0;
        }
    }
    ctx->pc = 0x2741C8u;
    // 0x2741c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2741C8u;
    {
        const bool branch_taken_0x2741c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741C8u;
        // 0x2741cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741c8) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x2741D0u;
label_2741d0:
    // 0x2741d0: 0xc6011734  lwc1        $f1, 0x1734($s0)
    ctx->pc = 0x2741d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2741d4:
    // 0x2741d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2741d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2741d8: 0x0  nop
    ctx->pc = 0x2741d8u;
    // NOP
    // 0x2741dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2741dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2741e0: 0x0  nop
    ctx->pc = 0x2741e0u;
    // NOP
    // 0x2741e4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2741E4u;
    {
        const bool branch_taken_0x2741e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2741E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2741E4u;
        // 0x2741e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741e4) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x2741ECu;
    // 0x2741ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2741ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2741f0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2741f4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x2741f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x2741f8: 0xc0b0924  jal         func_2C2490
    ctx->pc = 0x2741F8u;
    SET_GPR_U32(ctx, 31, 0x274200u);
    ctx->pc = 0x2741FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2741F8u;
    // 0x2741fc: 0x260606c0  addiu       $a2, $s0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2490u, 0x2741F8u, 0x274200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274200u;
label_274200:
    // 0x274200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x274200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274204: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274204u;
    {
        const bool branch_taken_0x274204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x274208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274204u;
        // 0x274208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274204) {
            ctx->pc = 0x274214u;
            goto label_274214;
        }
    }
    ctx->pc = 0x27420Cu;
label_27420c:
    // 0x27420c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27420Cu;
    {
        const bool branch_taken_0x27420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27420Cu;
        // 0x274210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27420c) {
            ctx->pc = 0x274224u;
            goto label_274224;
        }
    }
    ctx->pc = 0x274214u;
label_274214:
    // 0x274214: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x274214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x274218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27421c: 0x0  nop
    ctx->pc = 0x27421cu;
    // NOP
    // 0x274220: 0xe6001734  swc1        $f0, 0x1734($s0)
    ctx->pc = 0x274220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5940), bits); }
label_274224:
    // 0x274224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x274224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27422c: 0x3e00008  jr          $ra
    ctx->pc = 0x27422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27422Cu;
        // 0x274230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274234u;
    // 0x274234: 0x0  nop
    ctx->pc = 0x274234u;
    // NOP
    ctx->pc = 0x274238u;
}
