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

// Function: func_00274FE8
// Address: 0x274fe8 - 0x2751c8
void func_00274FE8_0x274fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00274FE8_0x274fe8");
#endif

    switch (ctx->pc) {
        case 0x275050u: goto label_275050;
        case 0x275078u: goto label_275078;
        case 0x275088u: goto label_275088;
        case 0x275114u: goto label_275114;
        case 0x275144u: goto label_275144;
        case 0x275194u: goto label_275194;
        default: break;
    }

    ctx->pc = 0x274fe8u;

    // 0x274fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274fec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x274fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x274ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ff8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x274ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x274ffc: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x274FFCu;
    {
        const bool branch_taken_0x274ffc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x275000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FFCu;
        // 0x275000: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ffc) {
            ctx->pc = 0x275070u;
            goto label_275070;
        }
    }
    ctx->pc = 0x275004u;
    // 0x275004: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x275004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x275008: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x275008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27500Cu;
    {
        const bool branch_taken_0x27500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27500Cu;
        // 0x275010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27500c) {
            ctx->pc = 0x275024u;
            goto label_275024;
        }
    }
    ctx->pc = 0x275014u;
    // 0x275014: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x275014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x275018: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x275018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27501c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x27501Cu;
    {
        const bool branch_taken_0x27501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27501Cu;
        // 0x275020: 0xa20202f4  sb          $v0, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27501c) {
            ctx->pc = 0x2751B4u;
            goto label_2751b4;
        }
    }
    ctx->pc = 0x275024u;
label_275024:
    // 0x275024: 0x8e021644  lw          $v0, 0x1644($s0)
    ctx->pc = 0x275024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
    // 0x275028: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x275028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x27502c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x275030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275030u;
    {
        const bool branch_taken_0x275030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275030u;
        // 0x275034: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275030) {
            ctx->pc = 0x275040u;
            goto label_275040;
        }
    }
    ctx->pc = 0x275038u;
    // 0x275038: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x275038u;
    {
        const bool branch_taken_0x275038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275038u;
        // 0x27503c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275038) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x275040u;
label_275040:
    // 0x275040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275044: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x275044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x275048: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x275048u;
    SET_GPR_U32(ctx, 31, 0x275050u);
    ctx->pc = 0x27504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275048u;
    // 0x27504c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x275048u, 0x275050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275050u;
label_275050:
    // 0x275050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275050u;
    {
        const bool branch_taken_0x275050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275050u;
        // 0x275054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275050) {
            ctx->pc = 0x275068u;
            goto label_275068;
        }
    }
    ctx->pc = 0x275058u;
    // 0x275058: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x275058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27505c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x27505cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x275060: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x275060u;
    {
        const bool branch_taken_0x275060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275060u;
        // 0x275064: 0xa20202f4  sb          $v0, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275060) {
            ctx->pc = 0x2751B4u;
            goto label_2751b4;
        }
    }
    ctx->pc = 0x275068u;
label_275068:
    // 0x275068: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x275068u;
    {
        const bool branch_taken_0x275068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275068u;
        // 0x27506c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275068) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x275070u;
label_275070:
    // 0x275070: 0xc09d3a6  jal         func_274E98
    ctx->pc = 0x275070u;
    SET_GPR_U32(ctx, 31, 0x275078u);
    ctx->pc = 0x275074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275070u;
    // 0x275074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274E98u, 0x275070u, 0x275078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275078u;
label_275078:
    // 0x275078: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x275078u;
    {
        const bool branch_taken_0x275078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275078) {
            ctx->pc = 0x27507Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275078u;
            // 0x27507c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2751BCu;
            goto label_2751bc;
        }
    }
    ctx->pc = 0x275080u;
    // 0x275080: 0xc09d054  jal         func_274150
    ctx->pc = 0x275080u;
    SET_GPR_U32(ctx, 31, 0x275088u);
    ctx->pc = 0x275084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275080u;
    // 0x275084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274150u, 0x275080u, 0x275088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275088u;
label_275088:
    // 0x275088: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x275088u;
    {
        const bool branch_taken_0x275088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275088) {
            ctx->pc = 0x275150u;
            goto label_275150;
        }
    }
    ctx->pc = 0x275090u;
    // 0x275090: 0xc6011734  lwc1        $f1, 0x1734($s0)
    ctx->pc = 0x275090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275098: 0x0  nop
    ctx->pc = 0x275098u;
    // NOP
    // 0x27509c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27509cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2750a0: 0x0  nop
    ctx->pc = 0x2750a0u;
    // NOP
    // 0x2750a4: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x2750A4u;
    {
        const bool branch_taken_0x2750a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2750A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750A4u;
        // 0x2750a8: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750a4) {
            ctx->pc = 0x275150u;
            goto label_275150;
        }
    }
    ctx->pc = 0x2750ACu;
    // 0x2750ac: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2750acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2750b0: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2750B0u;
    {
        const bool branch_taken_0x2750b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2750B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750B0u;
        // 0x2750b4: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750b0) {
            ctx->pc = 0x275180u;
            goto label_275180;
        }
    }
    ctx->pc = 0x2750B8u;
    // 0x2750b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2750B8u;
    {
        const bool branch_taken_0x2750b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750B8u;
        // 0x2750bc: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750b8) {
            ctx->pc = 0x2750DCu;
            goto label_2750dc;
        }
    }
    ctx->pc = 0x2750C0u;
    // 0x2750c0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2750C0u;
    {
        const bool branch_taken_0x2750c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2750c0) {
            ctx->pc = 0x2750C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2750C0u;
            // 0x2750c4: 0x920217c1  lbu         $v0, 0x17C1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275104u;
            goto label_275104;
        }
    }
    ctx->pc = 0x2750C8u;
    // 0x2750c8: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x2750c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x2750cc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2750CCu;
    {
        const bool branch_taken_0x2750cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2750D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750CCu;
        // 0x2750d0: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750cc) {
            ctx->pc = 0x27518Cu;
            goto label_27518c;
        }
    }
    ctx->pc = 0x2750D4u;
    // 0x2750d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2750D4u;
    {
        const bool branch_taken_0x2750d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2750d4) {
            ctx->pc = 0x2750F8u;
            goto label_2750f8;
        }
    }
    ctx->pc = 0x2750DCu;
label_2750dc:
    // 0x2750dc: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x2750dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x2750e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2750E0u;
    {
        const bool branch_taken_0x2750e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2750e0) {
            ctx->pc = 0x2750E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2750E0u;
            // 0x2750e4: 0x920217c1  lbu         $v0, 0x17C1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275104u;
            goto label_275104;
        }
    }
    ctx->pc = 0x2750E8u;
    // 0x2750e8: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2750e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x2750ec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2750ECu;
    {
        const bool branch_taken_0x2750ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2750F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750ECu;
        // 0x2750f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750ec) {
            ctx->pc = 0x275184u;
            goto label_275184;
        }
    }
    ctx->pc = 0x2750F4u;
    // 0x2750f4: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2750f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2750f8:
    // 0x2750f8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2750F8u;
    {
        const bool branch_taken_0x2750f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2750FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750F8u;
        // 0x2750fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750f8) {
            ctx->pc = 0x275184u;
            goto label_275184;
        }
    }
    ctx->pc = 0x275100u;
    // 0x275100: 0x920217c1  lbu         $v0, 0x17C1($s0)
    ctx->pc = 0x275100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6081)));
label_275104:
    // 0x275104: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x275104u;
    {
        const bool branch_taken_0x275104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275104u;
        // 0x275108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275104) {
            ctx->pc = 0x275178u;
            goto label_275178;
        }
    }
    ctx->pc = 0x27510Cu;
    // 0x27510c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x27510Cu;
    SET_GPR_U32(ctx, 31, 0x275114u);
    ctx->pc = 0x275110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27510Cu;
    // 0x275110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x27510Cu, 0x275114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275114u;
label_275114:
    // 0x275114: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x275114u;
    {
        const bool branch_taken_0x275114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275114u;
        // 0x275118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275114) {
            ctx->pc = 0x275178u;
            goto label_275178;
        }
    }
    ctx->pc = 0x27511Cu;
    // 0x27511c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x27511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275120: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x275124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275128: 0x0  nop
    ctx->pc = 0x275128u;
    // NOP
    // 0x27512c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27512cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275130: 0x0  nop
    ctx->pc = 0x275130u;
    // NOP
    // 0x275134: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x275134u;
    {
        const bool branch_taken_0x275134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275134u;
        // 0x275138: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275134) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x27513Cu;
    // 0x27513c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27513Cu;
    SET_GPR_U32(ctx, 31, 0x275144u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27513Cu, 0x275144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275144u;
label_275144:
    // 0x275144: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x275144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x275148: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x275148u;
    {
        const bool branch_taken_0x275148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275148u;
        // 0x27514c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275148) {
            ctx->pc = 0x275178u;
            goto label_275178;
        }
    }
    ctx->pc = 0x275150u;
label_275150:
    // 0x275150: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x275154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x275154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27515c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x275160: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x275160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x275164: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x275164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x275168: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x275168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x27516c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27516cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x275170: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x275170u;
    {
        const bool branch_taken_0x275170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275170u;
        // 0x275174: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275170) {
            ctx->pc = 0x2751B8u;
            goto label_2751b8;
        }
    }
    ctx->pc = 0x275178u;
label_275178:
    // 0x275178: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x275178u;
    {
        const bool branch_taken_0x275178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275178u;
        // 0x27517c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275178) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x275180u;
label_275180:
    // 0x275180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275184:
    // 0x275184: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275184u;
    {
        const bool branch_taken_0x275184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275184u;
        // 0x275188: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275184) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x27518Cu;
label_27518c:
    // 0x27518c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x27518Cu;
    SET_GPR_U32(ctx, 31, 0x275194u);
    ctx->pc = 0x275190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27518Cu;
    // 0x275190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x27518Cu, 0x275194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275194u;
label_275194:
    // 0x275194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275194u;
    {
        const bool branch_taken_0x275194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275194u;
        // 0x275198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275194) {
            ctx->pc = 0x2751A4u;
            goto label_2751a4;
        }
    }
    ctx->pc = 0x27519Cu;
    // 0x27519c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27519Cu;
    {
        const bool branch_taken_0x27519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27519Cu;
        // 0x2751a0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27519c) {
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x2751A4u;
label_2751a4:
    // 0x2751a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2751a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2751a8:
    // 0x2751a8: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2751a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2751ac: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x2751acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2751b0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2751b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2751b4:
    // 0x2751b4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2751b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_2751b8:
    // 0x2751b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2751b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2751bc:
    // 0x2751bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2751bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2751c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2751C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2751C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751C0u;
        // 0x2751c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751C8u;
}
