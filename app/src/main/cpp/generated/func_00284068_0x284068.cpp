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

// Function: func_00284068
// Address: 0x284068 - 0x284350
void func_00284068_0x284068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284068_0x284068");
#endif

    switch (ctx->pc) {
        case 0x284068u: goto label_284068;
        case 0x28406cu: goto label_28406c;
        case 0x284070u: goto label_284070;
        case 0x284074u: goto label_284074;
        case 0x284078u: goto label_284078;
        case 0x28407cu: goto label_28407c;
        case 0x284080u: goto label_284080;
        case 0x284084u: goto label_284084;
        case 0x284088u: goto label_284088;
        case 0x28408cu: goto label_28408c;
        case 0x284090u: goto label_284090;
        case 0x284094u: goto label_284094;
        case 0x284098u: goto label_284098;
        case 0x28409cu: goto label_28409c;
        case 0x2840a0u: goto label_2840a0;
        case 0x2840a4u: goto label_2840a4;
        case 0x2840a8u: goto label_2840a8;
        case 0x2840acu: goto label_2840ac;
        case 0x2840b0u: goto label_2840b0;
        case 0x2840b4u: goto label_2840b4;
        case 0x2840b8u: goto label_2840b8;
        case 0x2840bcu: goto label_2840bc;
        case 0x2840c0u: goto label_2840c0;
        case 0x2840c4u: goto label_2840c4;
        case 0x2840c8u: goto label_2840c8;
        case 0x2840ccu: goto label_2840cc;
        case 0x2840d0u: goto label_2840d0;
        case 0x2840d4u: goto label_2840d4;
        case 0x2840d8u: goto label_2840d8;
        case 0x2840dcu: goto label_2840dc;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840e4u: goto label_2840e4;
        case 0x2840e8u: goto label_2840e8;
        case 0x2840ecu: goto label_2840ec;
        case 0x2840f0u: goto label_2840f0;
        case 0x2840f4u: goto label_2840f4;
        case 0x2840f8u: goto label_2840f8;
        case 0x2840fcu: goto label_2840fc;
        case 0x284100u: goto label_284100;
        case 0x284104u: goto label_284104;
        case 0x284108u: goto label_284108;
        case 0x28410cu: goto label_28410c;
        case 0x284110u: goto label_284110;
        case 0x284114u: goto label_284114;
        case 0x284118u: goto label_284118;
        case 0x28411cu: goto label_28411c;
        case 0x284120u: goto label_284120;
        case 0x284124u: goto label_284124;
        case 0x284128u: goto label_284128;
        case 0x28412cu: goto label_28412c;
        case 0x284130u: goto label_284130;
        case 0x284134u: goto label_284134;
        case 0x284138u: goto label_284138;
        case 0x28413cu: goto label_28413c;
        case 0x284140u: goto label_284140;
        case 0x284144u: goto label_284144;
        case 0x284148u: goto label_284148;
        case 0x28414cu: goto label_28414c;
        case 0x284150u: goto label_284150;
        case 0x284154u: goto label_284154;
        case 0x284158u: goto label_284158;
        case 0x28415cu: goto label_28415c;
        case 0x284160u: goto label_284160;
        case 0x284164u: goto label_284164;
        case 0x284168u: goto label_284168;
        case 0x28416cu: goto label_28416c;
        case 0x284170u: goto label_284170;
        case 0x284174u: goto label_284174;
        case 0x284178u: goto label_284178;
        case 0x28417cu: goto label_28417c;
        case 0x284180u: goto label_284180;
        case 0x284184u: goto label_284184;
        case 0x284188u: goto label_284188;
        case 0x28418cu: goto label_28418c;
        case 0x284190u: goto label_284190;
        case 0x284194u: goto label_284194;
        case 0x284198u: goto label_284198;
        case 0x28419cu: goto label_28419c;
        case 0x2841a0u: goto label_2841a0;
        case 0x2841a4u: goto label_2841a4;
        case 0x2841a8u: goto label_2841a8;
        case 0x2841acu: goto label_2841ac;
        case 0x2841b0u: goto label_2841b0;
        case 0x2841b4u: goto label_2841b4;
        case 0x2841b8u: goto label_2841b8;
        case 0x2841bcu: goto label_2841bc;
        case 0x2841c0u: goto label_2841c0;
        case 0x2841c4u: goto label_2841c4;
        case 0x2841c8u: goto label_2841c8;
        case 0x2841ccu: goto label_2841cc;
        case 0x2841d0u: goto label_2841d0;
        case 0x2841d4u: goto label_2841d4;
        case 0x2841d8u: goto label_2841d8;
        case 0x2841dcu: goto label_2841dc;
        case 0x2841e0u: goto label_2841e0;
        case 0x2841e4u: goto label_2841e4;
        case 0x2841e8u: goto label_2841e8;
        case 0x2841ecu: goto label_2841ec;
        case 0x2841f0u: goto label_2841f0;
        case 0x2841f4u: goto label_2841f4;
        case 0x2841f8u: goto label_2841f8;
        case 0x2841fcu: goto label_2841fc;
        case 0x284200u: goto label_284200;
        case 0x284204u: goto label_284204;
        case 0x284208u: goto label_284208;
        case 0x28420cu: goto label_28420c;
        case 0x284210u: goto label_284210;
        case 0x284214u: goto label_284214;
        case 0x284218u: goto label_284218;
        case 0x28421cu: goto label_28421c;
        case 0x284220u: goto label_284220;
        case 0x284224u: goto label_284224;
        case 0x284228u: goto label_284228;
        case 0x28422cu: goto label_28422c;
        case 0x284230u: goto label_284230;
        case 0x284234u: goto label_284234;
        case 0x284238u: goto label_284238;
        case 0x28423cu: goto label_28423c;
        case 0x284240u: goto label_284240;
        case 0x284244u: goto label_284244;
        case 0x284248u: goto label_284248;
        case 0x28424cu: goto label_28424c;
        case 0x284250u: goto label_284250;
        case 0x284254u: goto label_284254;
        case 0x284258u: goto label_284258;
        case 0x28425cu: goto label_28425c;
        case 0x284260u: goto label_284260;
        case 0x284264u: goto label_284264;
        case 0x284268u: goto label_284268;
        case 0x28426cu: goto label_28426c;
        case 0x284270u: goto label_284270;
        case 0x284274u: goto label_284274;
        case 0x284278u: goto label_284278;
        case 0x28427cu: goto label_28427c;
        case 0x284280u: goto label_284280;
        case 0x284284u: goto label_284284;
        case 0x284288u: goto label_284288;
        case 0x28428cu: goto label_28428c;
        case 0x284290u: goto label_284290;
        case 0x284294u: goto label_284294;
        case 0x284298u: goto label_284298;
        case 0x28429cu: goto label_28429c;
        case 0x2842a0u: goto label_2842a0;
        case 0x2842a4u: goto label_2842a4;
        case 0x2842a8u: goto label_2842a8;
        case 0x2842acu: goto label_2842ac;
        case 0x2842b0u: goto label_2842b0;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842b8u: goto label_2842b8;
        case 0x2842bcu: goto label_2842bc;
        case 0x2842c0u: goto label_2842c0;
        case 0x2842c4u: goto label_2842c4;
        case 0x2842c8u: goto label_2842c8;
        case 0x2842ccu: goto label_2842cc;
        case 0x2842d0u: goto label_2842d0;
        case 0x2842d4u: goto label_2842d4;
        case 0x2842d8u: goto label_2842d8;
        case 0x2842dcu: goto label_2842dc;
        case 0x2842e0u: goto label_2842e0;
        case 0x2842e4u: goto label_2842e4;
        case 0x2842e8u: goto label_2842e8;
        case 0x2842ecu: goto label_2842ec;
        case 0x2842f0u: goto label_2842f0;
        case 0x2842f4u: goto label_2842f4;
        case 0x2842f8u: goto label_2842f8;
        case 0x2842fcu: goto label_2842fc;
        case 0x284300u: goto label_284300;
        case 0x284304u: goto label_284304;
        case 0x284308u: goto label_284308;
        case 0x28430cu: goto label_28430c;
        case 0x284310u: goto label_284310;
        case 0x284314u: goto label_284314;
        case 0x284318u: goto label_284318;
        case 0x28431cu: goto label_28431c;
        case 0x284320u: goto label_284320;
        case 0x284324u: goto label_284324;
        case 0x284328u: goto label_284328;
        case 0x28432cu: goto label_28432c;
        case 0x284330u: goto label_284330;
        case 0x284334u: goto label_284334;
        case 0x284338u: goto label_284338;
        case 0x28433cu: goto label_28433c;
        case 0x284340u: goto label_284340;
        case 0x284344u: goto label_284344;
        case 0x284348u: goto label_284348;
        case 0x28434cu: goto label_28434c;
        default: break;
    }

    ctx->pc = 0x284068u;

label_284068:
    // 0x284068: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_28406c:
    // 0x28406c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28406cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_284070:
    // 0x284070: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x284070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_284074:
    // 0x284074: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x284074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_284078:
    // 0x284078: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x284078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28407c:
    // 0x28407c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_284080:
    // 0x284080: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x284080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_284084:
    // 0x284084: 0x146000ad  bnez        $v1, . + 4 + (0xAD << 2)
label_284088:
    if (ctx->pc == 0x284088u) {
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284084u;
        // 0x284088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28408Cu;
        goto label_28408c;
    }
    ctx->pc = 0x284084u;
    {
        const bool branch_taken_0x284084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284084u;
        // 0x284088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284084) {
            ctx->pc = 0x28433Cu;
            goto label_28433c;
        }
    }
    ctx->pc = 0x28408Cu;
label_28408c:
    // 0x28408c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x28408cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_284090:
    // 0x284090: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_284094:
    if (ctx->pc == 0x284094u) {
        ctx->pc = 0x284094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284090u;
        // 0x284094: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284098u;
        goto label_284098;
    }
    ctx->pc = 0x284090u;
    {
        const bool branch_taken_0x284090 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x284094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284090u;
        // 0x284094: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284090) {
            ctx->pc = 0x2840C0u;
            goto label_2840c0;
        }
    }
    ctx->pc = 0x284098u;
label_284098:
    // 0x284098: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_28409c:
    if (ctx->pc == 0x28409Cu) {
        ctx->pc = 0x28409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284098u;
        // 0x28409c: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840A0u;
        goto label_2840a0;
    }
    ctx->pc = 0x284098u;
    {
        const bool branch_taken_0x284098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284098) {
            ctx->pc = 0x28409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284098u;
            // 0x28409c: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840C4u;
            goto label_2840c4;
        }
    }
    ctx->pc = 0x2840A0u;
label_2840a0:
    // 0x2840a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2840a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2840a4:
    // 0x2840a4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2840a8:
    if (ctx->pc == 0x2840A8u) {
        ctx->pc = 0x2840A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A4u;
        // 0x2840a8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840ACu;
        goto label_2840ac;
    }
    ctx->pc = 0x2840A4u;
    {
        const bool branch_taken_0x2840a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2840a4) {
            ctx->pc = 0x2840A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840A4u;
            // 0x2840a8: 0x8e0202f0  lw          $v0, 0x2F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840C4u;
            goto label_2840c4;
        }
    }
    ctx->pc = 0x2840ACu;
label_2840ac:
    // 0x2840ac: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x2840acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_2840b0:
    // 0x2840b0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2840b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2840b4:
    // 0x2840b4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2840b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2840b8:
    // 0x2840b8: 0x60f809  jalr        $v1
label_2840bc:
    if (ctx->pc == 0x2840BCu) {
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B8u;
        // 0x2840bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840C0u;
        goto label_2840c0;
    }
    ctx->pc = 0x2840B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2840C0u);
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840B8u;
        // 0x2840bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2840B8u, 0x2840C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2840C0u;
label_2840c0:
    // 0x2840c0: 0x8e0202f0  lw          $v0, 0x2F0($s0)
    ctx->pc = 0x2840c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_2840c4:
    // 0x2840c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2840c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2840c8:
    // 0x2840c8: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_2840cc:
    if (ctx->pc == 0x2840CCu) {
        ctx->pc = 0x2840CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840C8u;
        // 0x2840cc: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840D0u;
        goto label_2840d0;
    }
    ctx->pc = 0x2840C8u;
    {
        const bool branch_taken_0x2840c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840c8) {
            ctx->pc = 0x2840CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840C8u;
            // 0x2840cc: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2841F8u;
            goto label_2841f8;
        }
    }
    ctx->pc = 0x2840D0u;
label_2840d0:
    // 0x2840d0: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x2840d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2840d4:
    // 0x2840d4: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_2840d8:
    if (ctx->pc == 0x2840D8u) {
        ctx->pc = 0x2840DCu;
        goto label_2840dc;
    }
    ctx->pc = 0x2840D4u;
    {
        const bool branch_taken_0x2840d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840d4) {
            ctx->pc = 0x28432Cu;
            goto label_28432c;
        }
    }
    ctx->pc = 0x2840DCu;
label_2840dc:
    // 0x2840dc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2840dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_2840e0:
    // 0x2840e0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2840e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_2840e4:
    // 0x2840e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2840e8:
    if (ctx->pc == 0x2840E8u) {
        ctx->pc = 0x2840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840E4u;
        // 0x2840e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840ECu;
        goto label_2840ec;
    }
    ctx->pc = 0x2840E4u;
    {
        const bool branch_taken_0x2840e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840E4u;
        // 0x2840e8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840e4) {
            ctx->pc = 0x2840F8u;
            goto label_2840f8;
        }
    }
    ctx->pc = 0x2840ECu;
label_2840ec:
    // 0x2840ec: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x2840ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_2840f0:
    // 0x2840f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2840f4:
    if (ctx->pc == 0x2840F4u) {
        ctx->pc = 0x2840F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840F0u;
        // 0x2840f4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2840F8u;
        goto label_2840f8;
    }
    ctx->pc = 0x2840F0u;
    {
        const bool branch_taken_0x2840f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840F0u;
        // 0x2840f4: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840f0) {
            ctx->pc = 0x2840FCu;
            goto label_2840fc;
        }
    }
    ctx->pc = 0x2840F8u;
label_2840f8:
    // 0x2840f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2840f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2840fc:
    // 0x2840fc: 0x8e0521b0  lw          $a1, 0x21B0($s0)
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_284100:
    // 0x284100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284104:
    // 0x284104: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_284108:
    // 0x284108: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x284108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
label_28410c:
    // 0x28410c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_284110:
    if (ctx->pc == 0x284110u) {
        ctx->pc = 0x284110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28410Cu;
        // 0x284110: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284114u;
        goto label_284114;
    }
    ctx->pc = 0x28410Cu;
    {
        const bool branch_taken_0x28410c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x284110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28410Cu;
        // 0x284110: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28410c) {
            ctx->pc = 0x284118u;
            goto label_284118;
        }
    }
    ctx->pc = 0x284114u;
label_284114:
    // 0x284114: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x284114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_284118:
    // 0x284118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x284118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28411c:
    // 0x28411c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_284120:
    if (ctx->pc == 0x284120u) {
        ctx->pc = 0x284120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28411Cu;
        // 0x284120: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284124u;
        goto label_284124;
    }
    ctx->pc = 0x28411Cu;
    {
        const bool branch_taken_0x28411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28411Cu;
        // 0x284120: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28411c) {
            ctx->pc = 0x284134u;
            goto label_284134;
        }
    }
    ctx->pc = 0x284124u;
label_284124:
    // 0x284124: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x284124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
label_284128:
    // 0x284128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28412c:
    // 0x28412c: 0x10000002  b           . + 4 + (0x2 << 2)
label_284130:
    if (ctx->pc == 0x284130u) {
        ctx->pc = 0x284130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28412Cu;
        // 0x284130: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284134u;
        goto label_284134;
    }
    ctx->pc = 0x28412Cu;
    {
        const bool branch_taken_0x28412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28412Cu;
        // 0x284130: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28412c) {
            ctx->pc = 0x284138u;
            goto label_284138;
        }
    }
    ctx->pc = 0x284134u;
label_284134:
    // 0x284134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284138:
    // 0x284138: 0x50c0002f  beql        $a2, $zero, . + 4 + (0x2F << 2)
label_28413c:
    if (ctx->pc == 0x28413Cu) {
        ctx->pc = 0x28413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284138u;
        // 0x28413c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284140u;
        goto label_284140;
    }
    ctx->pc = 0x284138u;
    {
        const bool branch_taken_0x284138 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x284138) {
            ctx->pc = 0x28413Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284138u;
            // 0x28413c: 0x8e0321b0  lw          $v1, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2841F8u;
            goto label_2841f8;
        }
    }
    ctx->pc = 0x284140u;
label_284140:
    // 0x284140: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_284144:
    if (ctx->pc == 0x284144u) {
        ctx->pc = 0x284144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284140u;
        // 0x284144: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284148u;
        goto label_284148;
    }
    ctx->pc = 0x284140u;
    {
        const bool branch_taken_0x284140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284140u;
        // 0x284144: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284140) {
            ctx->pc = 0x2841F4u;
            goto label_2841f4;
        }
    }
    ctx->pc = 0x284148u;
label_284148:
    // 0x284148: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x284148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_28414c:
    // 0x28414c: 0x8cc300f0  lw          $v1, 0xF0($a2)
    ctx->pc = 0x28414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 240)));
label_284150:
    // 0x284150: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x284150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_284154:
    // 0x284154: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x284154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_284158:
    // 0x284158: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x284158u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_28415c:
    // 0x28415c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28415cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_284160:
    // 0x284160: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x284160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_284164:
    // 0x284164: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x284164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_284168:
    // 0x284168: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x284168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28416c:
    // 0x28416c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x28416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_284170:
    // 0x284170: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
label_284174:
    if (ctx->pc == 0x284174u) {
        ctx->pc = 0x284174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284170u;
        // 0x284174: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x284178u;
        goto label_284178;
    }
    ctx->pc = 0x284170u;
    {
        const bool branch_taken_0x284170 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x284174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284170u;
        // 0x284174: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284170) {
            ctx->pc = 0x28418Cu;
            goto label_28418c;
        }
    }
    ctx->pc = 0x284178u;
label_284178:
    // 0x284178: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x284178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28417c:
    // 0x28417c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x28417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_284180:
    // 0x284180: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284184:
    // 0x284184: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284188:
    // 0x284188: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28418c:
    // 0x28418c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x28418cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_284190:
    // 0x284190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x284190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284194:
    // 0x284194: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x284194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_284198:
    // 0x284198: 0x26052130  addiu       $a1, $s0, 0x2130
    ctx->pc = 0x284198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8496));
label_28419c:
    // 0x28419c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2841a0:
    if (ctx->pc == 0x2841A0u) {
        ctx->pc = 0x2841A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28419Cu;
        // 0x2841a0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841A4u;
        goto label_2841a4;
    }
    ctx->pc = 0x28419Cu;
    {
        const bool branch_taken_0x28419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28419Cu;
        // 0x2841a0: 0x260605b0  addiu       $a2, $s0, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28419c) {
            ctx->pc = 0x2841ECu;
            goto label_2841ec;
        }
    }
    ctx->pc = 0x2841A4u;
label_2841a4:
    // 0x2841a4: 0x0  nop
    ctx->pc = 0x2841a4u;
    // NOP
label_2841a8:
    // 0x2841a8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2841a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841ac:
    // 0x2841ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2841acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2841b0:
    // 0x2841b0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x2841b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2841b4:
    // 0x2841b4: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x2841b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2841b8:
    // 0x2841b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2841b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2841bc:
    // 0x2841bc: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x2841bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2841c0:
    // 0x2841c0: 0xe46100b0  swc1        $f1, 0xB0($v1)
    ctx->pc = 0x2841c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_2841c4:
    // 0x2841c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2841c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841c8:
    // 0x2841c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2841c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2841cc:
    // 0x2841cc: 0xe46200b4  swc1        $f2, 0xB4($v1)
    ctx->pc = 0x2841ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_2841d0:
    // 0x2841d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2841d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2841d4:
    // 0x2841d4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2841d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2841d8:
    // 0x2841d8: 0xe46300b8  swc1        $f3, 0xB8($v1)
    ctx->pc = 0x2841d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_2841dc:
    // 0x2841dc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x2841dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_2841e0:
    // 0x2841e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2841e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2841e4:
    // 0x2841e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2841e8:
    if (ctx->pc == 0x2841E8u) {
        ctx->pc = 0x2841E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E4u;
        // 0x2841e8: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841ECu;
        goto label_2841ec;
    }
    ctx->pc = 0x2841E4u;
    {
        const bool branch_taken_0x2841e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841E4u;
        // 0x2841e8: 0x8c630144  lw          $v1, 0x144($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e4) {
            ctx->pc = 0x2841A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2841a8;
        }
    }
    ctx->pc = 0x2841ECu;
label_2841ec:
    // 0x2841ec: 0xc041f1a  jal         func_107C68
label_2841f0:
    if (ctx->pc == 0x2841F0u) {
        ctx->pc = 0x2841F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841ECu;
        // 0x2841f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841F4u;
        goto label_2841f4;
    }
    ctx->pc = 0x2841ECu;
    SET_GPR_U32(ctx, 31, 0x2841F4u);
    ctx->pc = 0x2841F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2841ECu;
    // 0x2841f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107C68u, 0x2841ECu, 0x2841F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2841F4u;
label_2841f4:
    // 0x2841f4: 0x8e0321b0  lw          $v1, 0x21B0($s0)
    ctx->pc = 0x2841f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2841f8:
    // 0x2841f8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_2841fc:
    if (ctx->pc == 0x2841FCu) {
        ctx->pc = 0x2841FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F8u;
        // 0x2841fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284200u;
        goto label_284200;
    }
    ctx->pc = 0x2841F8u;
    {
        const bool branch_taken_0x2841f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2841F8u;
        // 0x2841fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f8) {
            ctx->pc = 0x28432Cu;
            goto label_28432c;
        }
    }
    ctx->pc = 0x284200u;
label_284200:
    // 0x284200: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x284200u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
label_284204:
    // 0x284204: 0x8e0421b4  lw          $a0, 0x21B4($s0)
    ctx->pc = 0x284204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8628)));
label_284208:
    // 0x284208: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
label_28420c:
    if (ctx->pc == 0x28420Cu) {
        ctx->pc = 0x28420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284208u;
        // 0x28420c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284210u;
        goto label_284210;
    }
    ctx->pc = 0x284208u;
    {
        const bool branch_taken_0x284208 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x28420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284208u;
        // 0x28420c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284208) {
            ctx->pc = 0x284214u;
            goto label_284214;
        }
    }
    ctx->pc = 0x284210u;
label_284210:
    // 0x284210: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x284210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_284214:
    // 0x284214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x284214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_284218:
    // 0x284218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_28421c:
    if (ctx->pc == 0x28421Cu) {
        ctx->pc = 0x28421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284218u;
        // 0x28421c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284220u;
        goto label_284220;
    }
    ctx->pc = 0x284218u;
    {
        const bool branch_taken_0x284218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284218u;
        // 0x28421c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284218) {
            ctx->pc = 0x284230u;
            goto label_284230;
        }
    }
    ctx->pc = 0x284220u;
label_284220:
    // 0x284220: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x284220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
label_284224:
    // 0x284224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284228:
    // 0x284228: 0x10000002  b           . + 4 + (0x2 << 2)
label_28422c:
    if (ctx->pc == 0x28422Cu) {
        ctx->pc = 0x28422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284228u;
        // 0x28422c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284230u;
        goto label_284230;
    }
    ctx->pc = 0x284228u;
    {
        const bool branch_taken_0x284228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284228u;
        // 0x28422c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284228) {
            ctx->pc = 0x284234u;
            goto label_284234;
        }
    }
    ctx->pc = 0x284230u;
label_284230:
    // 0x284230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x284230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284234:
    // 0x284234: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_284238:
    if (ctx->pc == 0x284238u) {
        ctx->pc = 0x284238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284234u;
        // 0x284238: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28423Cu;
        goto label_28423c;
    }
    ctx->pc = 0x284234u;
    {
        const bool branch_taken_0x284234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x284234) {
            ctx->pc = 0x284238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284234u;
            // 0x284238: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2842B0u;
            goto label_2842b0;
        }
    }
    ctx->pc = 0x28423Cu;
label_28423c:
    // 0x28423c: 0x8e0221b0  lw          $v0, 0x21B0($s0)
    ctx->pc = 0x28423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_284240:
    // 0x284240: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x284240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_284244:
    // 0x284244: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x284244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_284248:
    // 0x284248: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_28424c:
    if (ctx->pc == 0x28424Cu) {
        ctx->pc = 0x28424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284248u;
        // 0x28424c: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284250u;
        goto label_284250;
    }
    ctx->pc = 0x284248u;
    {
        const bool branch_taken_0x284248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x284248) {
            ctx->pc = 0x28424Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284248u;
            // 0x28424c: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28426Cu;
            goto label_28426c;
        }
    }
    ctx->pc = 0x284250u;
label_284250:
    // 0x284250: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x284250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284254:
    // 0x284254: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x284254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_284258:
    // 0x284258: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x284258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28425c:
    // 0x28425c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28425cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_284260:
    // 0x284260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x284260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284264:
    // 0x284264: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x284264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_284268:
    // 0x284268: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x284268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_28426c:
    // 0x28426c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_284270:
    if (ctx->pc == 0x284270u) {
        ctx->pc = 0x284270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28426Cu;
        // 0x284270: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284274u;
        goto label_284274;
    }
    ctx->pc = 0x28426Cu;
    {
        const bool branch_taken_0x28426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28426Cu;
        // 0x284270: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28426c) {
            ctx->pc = 0x284280u;
            goto label_284280;
        }
    }
    ctx->pc = 0x284274u;
label_284274:
    // 0x284274: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x284274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_284278:
    // 0x284278: 0x10000002  b           . + 4 + (0x2 << 2)
label_28427c:
    if (ctx->pc == 0x28427Cu) {
        ctx->pc = 0x28427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284278u;
        // 0x28427c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284280u;
        goto label_284280;
    }
    ctx->pc = 0x284278u;
    {
        const bool branch_taken_0x284278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284278u;
        // 0x28427c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284278) {
            ctx->pc = 0x284284u;
            goto label_284284;
        }
    }
    ctx->pc = 0x284280u;
label_284280:
    // 0x284280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284284:
    // 0x284284: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x284284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_284288:
    // 0x284288: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_28428c:
    // 0x28428c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_284290:
    if (ctx->pc == 0x284290u) {
        ctx->pc = 0x284290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28428Cu;
        // 0x284290: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284294u;
        goto label_284294;
    }
    ctx->pc = 0x28428Cu;
    {
        const bool branch_taken_0x28428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28428c) {
            ctx->pc = 0x284290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28428Cu;
            // 0x284290: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2842B0u;
            goto label_2842b0;
        }
    }
    ctx->pc = 0x284294u;
label_284294:
    // 0x284294: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x284294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284298:
    // 0x284298: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x284298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_28429c:
    // 0x28429c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2842a0:
    // 0x2842a0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2842a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2842a4:
    // 0x2842a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2842a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2842a8:
    // 0x2842a8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2842a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2842ac:
    // 0x2842ac: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x2842acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2842b0:
    // 0x2842b0: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x2842b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2842b4:
    // 0x2842b4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x2842b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_2842b8:
    // 0x2842b8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_2842bc:
    if (ctx->pc == 0x2842BCu) {
        ctx->pc = 0x2842BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2842B8u;
        // 0x2842bc: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2842C0u;
        goto label_2842c0;
    }
    ctx->pc = 0x2842B8u;
    {
        const bool branch_taken_0x2842b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2842b8) {
            ctx->pc = 0x2842BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2842B8u;
            // 0x2842bc: 0x8e0421b0  lw          $a0, 0x21B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2842DCu;
            goto label_2842dc;
        }
    }
    ctx->pc = 0x2842C0u;
label_2842c0:
    // 0x2842c0: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x2842c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2842c4:
    // 0x2842c4: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x2842c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_2842c8:
    // 0x2842c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2842c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2842cc:
    // 0x2842cc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2842ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2842d0:
    // 0x2842d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2842d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2842d4:
    // 0x2842d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2842d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2842d8:
    // 0x2842d8: 0x8e0421b0  lw          $a0, 0x21B0($s0)
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8624)));
label_2842dc:
    // 0x2842dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2842dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2842e0:
    // 0x2842e0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x2842e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_2842e4:
    // 0x2842e4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2842e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_2842e8:
    // 0x2842e8: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x2842e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2842ec:
    // 0x2842ec: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2842ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2842f0:
    // 0x2842f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2842f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2842f4:
    // 0x2842f4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x2842f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_2842f8:
    // 0x2842f8: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x2842f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
label_2842fc:
    // 0x2842fc: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2842fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_284300:
    // 0x284300: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x284300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_284304:
    // 0x284304: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_284308:
    // 0x284308: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x284308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_28430c:
    // 0x28430c: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x28430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_284310:
    // 0x284310: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x284310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_284314:
    // 0x284314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_284318:
    if (ctx->pc == 0x284318u) {
        ctx->pc = 0x284318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284314u;
        // 0x284318: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28431Cu;
        goto label_28431c;
    }
    ctx->pc = 0x284314u;
    {
        const bool branch_taken_0x284314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284314u;
        // 0x284318: 0x651025  or          $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284314) {
            ctx->pc = 0x284328u;
            goto label_284328;
        }
    }
    ctx->pc = 0x28431Cu;
label_28431c:
    // 0x28431c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x28431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_284320:
    // 0x284320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x284320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_284324:
    // 0x284324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x284324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_284328:
    // 0x284328: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x284328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_28432c:
    // 0x28432c: 0xc0527ae  jal         func_149EB8
label_284330:
    if (ctx->pc == 0x284330u) {
        ctx->pc = 0x284330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28432Cu;
        // 0x284330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284334u;
        goto label_284334;
    }
    ctx->pc = 0x28432Cu;
    SET_GPR_U32(ctx, 31, 0x284334u);
    ctx->pc = 0x284330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28432Cu;
    // 0x284330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x28432Cu, 0x284334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284334u;
label_284334:
    // 0x284334: 0xc0a1128  jal         func_2844A0
label_284338:
    if (ctx->pc == 0x284338u) {
        ctx->pc = 0x284338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284334u;
        // 0x284338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28433Cu;
        goto label_28433c;
    }
    ctx->pc = 0x284334u;
    SET_GPR_U32(ctx, 31, 0x28433Cu);
    ctx->pc = 0x284338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284334u;
    // 0x284338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2844A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2844A0u, 0x284334u, 0x28433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28433Cu;
label_28433c:
    // 0x28433c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28433cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_284340:
    // 0x284340: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x284340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_284344:
    // 0x284344: 0x3e00008  jr          $ra
label_284348:
    if (ctx->pc == 0x284348u) {
        ctx->pc = 0x284348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284344u;
        // 0x284348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28434Cu;
        goto label_28434c;
    }
    ctx->pc = 0x284344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284344u;
        // 0x284348: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28434Cu;
label_28434c:
    // 0x28434c: 0x0  nop
    ctx->pc = 0x28434cu;
    // NOP
    ctx->pc = 0x284350u;
}
