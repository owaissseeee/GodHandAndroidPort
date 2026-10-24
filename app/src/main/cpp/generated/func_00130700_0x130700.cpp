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

// Function: func_00130700
// Address: 0x130700 - 0x1311a0
void func_00130700_0x130700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00130700_0x130700");
#endif

    switch (ctx->pc) {
        case 0x130760u: goto label_130760;
        case 0x130780u: goto label_130780;
        case 0x130818u: goto label_130818;
        case 0x1308f8u: goto label_1308f8;
        case 0x130940u: goto label_130940;
        case 0x130970u: goto label_130970;
        case 0x130980u: goto label_130980;
        case 0x13098cu: goto label_13098c;
        case 0x1309bcu: goto label_1309bc;
        case 0x130b00u: goto label_130b00;
        case 0x130bccu: goto label_130bcc;
        case 0x130bd8u: goto label_130bd8;
        case 0x130c38u: goto label_130c38;
        case 0x130cb8u: goto label_130cb8;
        case 0x130db0u: goto label_130db0;
        case 0x130df8u: goto label_130df8;
        case 0x130e28u: goto label_130e28;
        case 0x130e38u: goto label_130e38;
        case 0x130e44u: goto label_130e44;
        case 0x130e74u: goto label_130e74;
        case 0x130f58u: goto label_130f58;
        case 0x131010u: goto label_131010;
        case 0x1310f0u: goto label_1310f0;
        case 0x1310fcu: goto label_1310fc;
        default: break;
    }

    ctx->pc = 0x130700u;

    // 0x130700: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x130704: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x130704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x130708: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x130708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x13070c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130710: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x130710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x130714: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x130714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x130718: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x130718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x13071c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x13071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x130720: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x130720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x130724: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x130724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x130728: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x130728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x13072c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x13072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x130730: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x130730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x130734: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x130734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
    // 0x130738: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x130738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x13073c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x13073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130740: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x130744: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x130744u;
    {
        const bool branch_taken_0x130744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130744) {
            ctx->pc = 0x130748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130744u;
            // 0x130748: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13074Cu;
            goto label_13074c;
        }
    }
    ctx->pc = 0x13074Cu;
label_13074c:
    // 0x13074c: 0x8e150190  lw          $s5, 0x190($s0)
    ctx->pc = 0x13074cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x130750: 0x52a00288  beql        $s5, $zero, . + 4 + (0x288 << 2)
    ctx->pc = 0x130750u;
    {
        const bool branch_taken_0x130750 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x130750) {
            ctx->pc = 0x130754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130750u;
            // 0x130754: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131174u;
            goto label_131174;
        }
    }
    ctx->pc = 0x130758u;
    // 0x130758: 0x9ea20008  lwu         $v0, 0x8($s5)
    ctx->pc = 0x130758u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13075c: 0x0  nop
    ctx->pc = 0x13075cu;
    // NOP
label_130760:
    // 0x130760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x130764: 0x1040027f  beqz        $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x130764u;
    {
        const bool branch_taken_0x130764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130764) {
            ctx->pc = 0x131164u;
            goto label_131164;
        }
    }
    ctx->pc = 0x13076Cu;
    // 0x13076c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130770: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x130770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x130774: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x130778: 0xc04cd02  jal         func_133408
    ctx->pc = 0x130778u;
    SET_GPR_U32(ctx, 31, 0x130780u);
    ctx->pc = 0x13077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130778u;
    // 0x13077c: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133408u, 0x130778u, 0x130780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130780u;
label_130780:
    // 0x130780: 0x50400279  beql        $v0, $zero, . + 4 + (0x279 << 2)
    ctx->pc = 0x130780u;
    {
        const bool branch_taken_0x130780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130780) {
            ctx->pc = 0x130784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130780u;
            // 0x130784: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x130788u;
    // 0x130788: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x130788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13078c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13078cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130790: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130790u;
    {
        const bool branch_taken_0x130790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x130794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130790u;
        // 0x130794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130790) {
            ctx->pc = 0x1307A8u;
            goto label_1307a8;
        }
    }
    ctx->pc = 0x130798u;
    // 0x130798: 0x10620126  beq         $v1, $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x130798u;
    {
        const bool branch_taken_0x130798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130798u;
        // 0x13079c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130798) {
            ctx->pc = 0x130C34u;
            goto label_130c34;
        }
    }
    ctx->pc = 0x1307A0u;
    // 0x1307a0: 0x10000271  b           . + 4 + (0x271 << 2)
    ctx->pc = 0x1307A0u;
    {
        const bool branch_taken_0x1307a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1307A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307A0u;
        // 0x1307a4: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307a0) {
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1307A8u;
label_1307a8:
    // 0x1307a8: 0x26b200a8  addiu       $s2, $s5, 0xA8
    ctx->pc = 0x1307a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 168));
    // 0x1307ac: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1307acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1307b0: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x1307b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1307b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1307b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1307b8: 0x5040026b  beql        $v0, $zero, . + 4 + (0x26B << 2)
    ctx->pc = 0x1307B8u;
    {
        const bool branch_taken_0x1307b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307b8) {
            ctx->pc = 0x1307BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1307B8u;
            // 0x1307bc: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1307C0u;
    // 0x1307c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1307c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1307c4: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x1307c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1307c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1307c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1307cc: 0x54400266  bnel        $v0, $zero, . + 4 + (0x266 << 2)
    ctx->pc = 0x1307CCu;
    {
        const bool branch_taken_0x1307cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1307cc) {
            ctx->pc = 0x1307D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1307CCu;
            // 0x1307d0: 0x8eb50000  lw          $s5, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131168u;
            goto label_131168;
        }
    }
    ctx->pc = 0x1307D4u;
    // 0x1307d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1307d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1307d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1307d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1307dc: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1307dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1307e0: 0x26b300c0  addiu       $s3, $s5, 0xC0
    ctx->pc = 0x1307e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1307e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1307e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1307e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1307e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1307ec: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x1307ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x1307f0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1307f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1307f4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1307f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1307f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1307fc: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1307fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x130800: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x130800u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130804: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x130804u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130808: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x130808u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13080c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x13080cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130810: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130814: 0x0  nop
    ctx->pc = 0x130814u;
    // NOP
label_130818:
    // 0x130818: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x130818u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13081c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130820: 0x0  nop
    ctx->pc = 0x130820u;
    // NOP
    // 0x130824: 0x0  nop
    ctx->pc = 0x130824u;
    // NOP
    // 0x130828: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130828u;
    {
        const bool branch_taken_0x130828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130828u;
        // 0x13082c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130828) {
            ctx->pc = 0x130818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130818;
        }
    }
    ctx->pc = 0x130830u;
    // 0x130830: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x130834: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x130834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130838: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D630u));
    // 0x13083c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13083cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130840: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130844: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130844u;
    {
        const bool branch_taken_0x130844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x130848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130844u;
        // 0x130848: 0x2463d630  addiu       $v1, $v1, -0x29D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130844) {
            ctx->pc = 0x130864u;
            goto label_130864;
        }
    }
    ctx->pc = 0x13084Cu;
    // 0x13084c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130850: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x130850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130854: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130858: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x130858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13085c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130860: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x130860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_130864:
    // 0x130864: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x130864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x130868: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13086c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130870: 0x50e20008  beql        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130870u;
    {
        const bool branch_taken_0x130870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x130870) {
            ctx->pc = 0x130874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130870u;
            // 0x130874: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130894u;
            goto label_130894;
        }
    }
    ctx->pc = 0x130878u;
    // 0x130878: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13087c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x13087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x130880: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130884: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x130884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x130888: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13088c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x130890: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x130890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_130894:
    // 0x130894: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130898: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13089c: 0x50c20008  beql        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13089Cu;
    {
        const bool branch_taken_0x13089c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x13089c) {
            ctx->pc = 0x1308A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13089Cu;
            // 0x1308a0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1308C0u;
            goto label_1308c0;
        }
    }
    ctx->pc = 0x1308A4u;
    // 0x1308a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1308a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1308a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1308ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1308acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1308b0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1308b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1308b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1308b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308b8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1308b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1308bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1308bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1308c0:
    // 0x1308c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1308c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1308c8: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1308C8u;
    {
        const bool branch_taken_0x1308c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x1308c8) {
            ctx->pc = 0x1308E8u;
            goto label_1308e8;
        }
    }
    ctx->pc = 0x1308D0u;
    // 0x1308d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1308d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308d4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1308d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1308d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1308d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1308dc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1308dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1308e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1308e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1308e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1308e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1308e8:
    // 0x1308e8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1308e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1308ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1308f0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1308f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1308f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1308f8:
    // 0x1308f8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1308f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1308fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130900: 0x0  nop
    ctx->pc = 0x130900u;
    // NOP
    // 0x130904: 0x0  nop
    ctx->pc = 0x130904u;
    // NOP
    // 0x130908: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130908u;
    {
        const bool branch_taken_0x130908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130908u;
        // 0x13090c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130908) {
            ctx->pc = 0x1308F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1308f8;
        }
    }
    ctx->pc = 0x130910u;
    // 0x130910: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130914: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130918: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x130918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13091c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13091cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130920: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130924: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130928: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13092c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13092cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130930: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130934: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x130934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130938: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x130938u;
    SET_GPR_U32(ctx, 31, 0x130940u);
    ctx->pc = 0x13093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130938u;
    // 0x13093c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x130938u, 0x130940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130940u;
label_130940:
    // 0x130940: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130944: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130948: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x130948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13094c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x13094cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130950: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130950u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130954: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130958: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13095c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13095cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130960: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130964: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x130964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x130968: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x130968u;
    SET_GPR_U32(ctx, 31, 0x130970u);
    ctx->pc = 0x13096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130968u;
    // 0x13096c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x130968u, 0x130970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130970u;
label_130970:
    // 0x130970: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x130970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x130974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130978: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x130978u;
    SET_GPR_U32(ctx, 31, 0x130980u);
    ctx->pc = 0x13097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130978u;
    // 0x13097c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x130978u, 0x130980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130980u;
label_130980:
    // 0x130980: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x130980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x130984: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x130984u;
    SET_GPR_U32(ctx, 31, 0x13098Cu);
    ctx->pc = 0x130988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130984u;
    // 0x130988: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x130984u, 0x13098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13098Cu;
label_13098c:
    // 0x13098c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13098cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130990: 0x0  nop
    ctx->pc = 0x130990u;
    // NOP
    // 0x130994: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x130994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130998: 0x0  nop
    ctx->pc = 0x130998u;
    // NOP
    // 0x13099c: 0x450001f1  bc1f        . + 4 + (0x1F1 << 2)
    ctx->pc = 0x13099Cu;
    {
        const bool branch_taken_0x13099c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1309A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13099Cu;
        // 0x1309a0: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13099c) {
            ctx->pc = 0x131164u;
            goto label_131164;
        }
    }
    ctx->pc = 0x1309A4u;
    // 0x1309a4: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x1309a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1309a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1309a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1309ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1309acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1309b0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x1309b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1309b4: 0xc04d96e  jal         func_1365B8
    ctx->pc = 0x1309B4u;
    SET_GPR_U32(ctx, 31, 0x1309BCu);
    ctx->pc = 0x1309B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1309B4u;
    // 0x1309b8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365B8u, 0x1309B4u, 0x1309BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1309BCu;
label_1309bc:
    // 0x1309bc: 0x104001e9  beqz        $v0, . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1309BCu;
    {
        const bool branch_taken_0x1309bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309BCu;
        // 0x1309c0: 0x260800e0  addiu       $t0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309bc) {
            ctx->pc = 0x131164u;
            goto label_131164;
        }
    }
    ctx->pc = 0x1309C4u;
    // 0x1309c4: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x1309c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1309c8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1309C8u;
    {
        const bool branch_taken_0x1309c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309C8u;
        // 0x1309cc: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309c8) {
            ctx->pc = 0x130A20u;
            goto label_130a20;
        }
    }
    ctx->pc = 0x1309D0u;
    // 0x1309d0: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x1309d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x1309d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1309D4u;
    {
        const bool branch_taken_0x1309d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309d4) {
            ctx->pc = 0x1309D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1309D4u;
            // 0x1309d8: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1309ECu;
            goto label_1309ec;
        }
    }
    ctx->pc = 0x1309DCu;
    // 0x1309dc: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1309dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x1309e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1309e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1309e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1309E4u;
    {
        const bool branch_taken_0x1309e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309E4u;
        // 0x1309e8: 0xae03017c  sw          $v1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309e4) {
            ctx->pc = 0x130A1Cu;
            goto label_130a1c;
        }
    }
    ctx->pc = 0x1309ECu;
label_1309ec:
    // 0x1309ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1309ECu;
    {
        const bool branch_taken_0x1309ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1309F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1309ECu;
        // 0x1309f0: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1309ec) {
            ctx->pc = 0x130A20u;
            goto label_130a20;
        }
    }
    ctx->pc = 0x1309F4u;
    // 0x1309f4: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x1309f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1309f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1309fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1309fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130a00: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x130a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x130a04: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x130a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x130a08: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x130a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x130a0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x130a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130a14: 0xae03017c  sw          $v1, 0x17C($s0)
    ctx->pc = 0x130a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
    // 0x130a18: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x130a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
label_130a1c:
    // 0x130a1c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x130a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_130a20:
    // 0x130a20: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x130A20u;
    {
        const bool branch_taken_0x130a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A20u;
        // 0x130a24: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a20) {
            ctx->pc = 0x130AA0u;
            goto label_130aa0;
        }
    }
    ctx->pc = 0x130A28u;
    // 0x130a28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x130A28u;
    {
        const bool branch_taken_0x130a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A28u;
        // 0x130a2c: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a28) {
            ctx->pc = 0x130AA0u;
            goto label_130aa0;
        }
    }
    ctx->pc = 0x130A30u;
    // 0x130a30: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x130A30u;
    {
        const bool branch_taken_0x130a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A30u;
        // 0x130a34: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a30) {
            ctx->pc = 0x130AA4u;
            goto label_130aa4;
        }
    }
    ctx->pc = 0x130A38u;
    // 0x130a38: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x130a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x130a3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x130A3Cu;
    {
        const bool branch_taken_0x130a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130a3c) {
            ctx->pc = 0x130A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130A3Cu;
            // 0x130a40: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130A64u;
            goto label_130a64;
        }
    }
    ctx->pc = 0x130A44u;
    // 0x130a44: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x130a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x130a48: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x130A48u;
    {
        const bool branch_taken_0x130a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A48u;
        // 0x130a4c: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a48) {
            ctx->pc = 0x130AA8u;
            goto label_130aa8;
        }
    }
    ctx->pc = 0x130A50u;
    // 0x130a50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x130a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x130a54: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x130a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x130a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130a5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x130A5Cu;
    {
        const bool branch_taken_0x130a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A5Cu;
        // 0x130a60: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a5c) {
            ctx->pc = 0x130AA0u;
            goto label_130aa0;
        }
    }
    ctx->pc = 0x130A64u;
label_130a64:
    // 0x130a64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x130a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130a68: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x130a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x130a6c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x130a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x130a70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x130A70u;
    {
        const bool branch_taken_0x130a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A70u;
        // 0x130a74: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a70) {
            ctx->pc = 0x130AA4u;
            goto label_130aa4;
        }
    }
    ctx->pc = 0x130A78u;
    // 0x130a78: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x130a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x130a7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130A7Cu;
    {
        const bool branch_taken_0x130a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A7Cu;
        // 0x130a80: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a7c) {
            ctx->pc = 0x130AA4u;
            goto label_130aa4;
        }
    }
    ctx->pc = 0x130A84u;
    // 0x130a84: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x130a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x130a88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x130a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130a8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x130a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x130a90: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x130a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x130a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x130a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130a98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130a9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x130a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_130aa0:
    // 0x130aa0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x130aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_130aa4:
    // 0x130aa4: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x130aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_130aa8:
    // 0x130aa8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x130aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130aac: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x130aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130ab0: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x130ab0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x130ab4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x130ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130ab8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x130ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x130abc: 0xc6040188  lwc1        $f4, 0x188($s0)
    ctx->pc = 0x130abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130ac0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x130ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130ac4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x130ac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x130ac8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x130ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x130acc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x130accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x130ad0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x130ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x130ad4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x130ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x130ad8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x130ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130adc: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x130adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130ae0: 0x0  nop
    ctx->pc = 0x130ae0u;
    // NOP
    // 0x130ae4: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x130AE4u;
    {
        const bool branch_taken_0x130ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AE4u;
        // 0x130ae8: 0xe6000184  swc1        $f0, 0x184($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ae4) {
            ctx->pc = 0x130C28u;
            goto label_130c28;
        }
    }
    ctx->pc = 0x130AECu;
    // 0x130aec: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x130aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130af4: 0x26120130  addiu       $s2, $s0, 0x130
    ctx->pc = 0x130af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x130af8: 0x26110120  addiu       $s1, $s0, 0x120
    ctx->pc = 0x130af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x130afc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_130b00:
    // 0x130b00: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x130b00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130b04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130b08: 0x0  nop
    ctx->pc = 0x130b08u;
    // NOP
    // 0x130b0c: 0x0  nop
    ctx->pc = 0x130b0cu;
    // NOP
    // 0x130b10: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130B10u;
    {
        const bool branch_taken_0x130b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x130B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B10u;
        // 0x130b14: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b10) {
            ctx->pc = 0x130B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130b00;
        }
    }
    ctx->pc = 0x130B18u;
    // 0x130b18: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x130b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x130b1c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x130b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x130b20: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
    // 0x130b24: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x130b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D634u));
    // 0x130b28: 0x8c83d630  lw          $v1, -0x29D0($a0)
    ctx->pc = 0x130b28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41D630u));
    // 0x130b2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130b30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x130b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x130b34: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130b38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x130b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x130b3c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130b40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x130b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130b44: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x130b44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130b48: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130b4c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130b50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130b54: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x130b54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130b58: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130b5c: 0x2484d630  addiu       $a0, $a0, -0x29D0
    ctx->pc = 0x130b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956592));
    // 0x130b60: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x130b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130b64: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x130b68: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x130b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130b6c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x130b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130b74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130b78: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x130b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x130b7c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x130b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x130b80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x130b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x130b84: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130b88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x130b88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130b8c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x130b8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130b90: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130b90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130b94: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130b98: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130b9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x130b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ba0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130ba4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x130ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130ba8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x130ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bac: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x130bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x130bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130bb8: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x130bbc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x130bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x130bc0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x130bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x130bc4: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x130BC4u;
    SET_GPR_U32(ctx, 31, 0x130BCCu);
    ctx->pc = 0x130BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BC4u;
    // 0x130bc8: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x130BC4u, 0x130BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BCCu;
label_130bcc:
    // 0x130bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x130BD0u;
    SET_GPR_U32(ctx, 31, 0x130BD8u);
    ctx->pc = 0x130BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BD0u;
    // 0x130bd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x130BD0u, 0x130BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BD8u;
label_130bd8:
    // 0x130bd8: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x130bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130bdc: 0x123d0007  beq         $s1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x130BDCu;
    {
        const bool branch_taken_0x130bdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x130BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BDCu;
        // 0x130be0: 0xe6000188  swc1        $f0, 0x188($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bdc) {
            ctx->pc = 0x130BFCu;
            goto label_130bfc;
        }
    }
    ctx->pc = 0x130BE4u;
    // 0x130be4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x130be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130be8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x130be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130bec: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x130becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x130bf0: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x130bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x130bf4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x130bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130bf8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x130bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_130bfc:
    // 0x130bfc: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x130bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x130c00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x130C00u;
    {
        const bool branch_taken_0x130c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C00u;
        // 0x130c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c00) {
            ctx->pc = 0x130C2Cu;
            goto label_130c2c;
        }
    }
    ctx->pc = 0x130C08u;
    // 0x130c08: 0x52d10156  beql        $s6, $s1, . + 4 + (0x156 << 2)
    ctx->pc = 0x130C08u;
    {
        const bool branch_taken_0x130c08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 17));
        if (branch_taken_0x130c08) {
            ctx->pc = 0x130C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C08u;
            // 0x130c0c: 0xa2020180  sb          $v0, 0x180($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131164u;
            goto label_131164;
        }
    }
    ctx->pc = 0x130C10u;
    // 0x130c10: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x130c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c14: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x130c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x130c18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x130c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130c1c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x130c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x130c20: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x130c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130c24: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x130c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_130c28:
    // 0x130c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130c2c:
    // 0x130c2c: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x130C2Cu;
    {
        const bool branch_taken_0x130c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C2Cu;
        // 0x130c30: 0xa2020180  sb          $v0, 0x180($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c2c) {
            ctx->pc = 0x131164u;
            goto label_131164;
        }
    }
    ctx->pc = 0x130C34u;
label_130c34:
    // 0x130c34: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x130c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_130c38:
    // 0x130c38: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x130c3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x130c3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x130c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130c44: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x130c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x130c48: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x130c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x130c4c: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x130c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x130c50: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x130c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x130c54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x130c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x130c58: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x130C58u;
    {
        const bool branch_taken_0x130c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C58u;
        // 0x130c5c: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c58) {
            ctx->pc = 0x131158u;
            goto label_131158;
        }
    }
    ctx->pc = 0x130C60u;
    // 0x130c60: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x130c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130c64: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x130c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x130c68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x130c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x130c6c: 0x5440013b  bnel        $v0, $zero, . + 4 + (0x13B << 2)
    ctx->pc = 0x130C6Cu;
    {
        const bool branch_taken_0x130c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130c6c) {
            ctx->pc = 0x130C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130C6Cu;
            // 0x130c70: 0x2c820006  sltiu       $v0, $a0, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13115Cu;
            goto label_13115c;
        }
    }
    ctx->pc = 0x130C74u;
    // 0x130c74: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x130c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x130c78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x130c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x130c7c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x130c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x130c80: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x130c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130c84: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x130c88: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x130c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
    // 0x130c8c: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x130c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x130c90: 0x26b30110  addiu       $s3, $s5, 0x110
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
    // 0x130c94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x130c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130c98: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x130c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x130c9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x130c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x130ca0: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x130ca0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130ca4: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x130ca4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x130ca8: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x130cac: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x130cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130cb0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x130cb4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_130cb8:
    // 0x130cb8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x130cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130cbc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x130cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x130cc0: 0x0  nop
    ctx->pc = 0x130cc0u;
    // NOP
    // 0x130cc4: 0x0  nop
    ctx->pc = 0x130cc4u;
    // NOP
    // 0x130cc8: 0x14a4fffb  bne         $a1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130CC8u;
    {
        const bool branch_taken_0x130cc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x130CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CC8u;
        // 0x130ccc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cc8) {
            ctx->pc = 0x130CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130cb8;
        }
    }
    ctx->pc = 0x130CD0u;
    // 0x130cd0: 0x2464d640  addiu       $a0, $v1, -0x29C0
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x130cd4: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x130cd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130cdc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130ce0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130ce4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130ce8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130CE8u;
    {
        const bool branch_taken_0x130ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x130ce8) {
            ctx->pc = 0x130CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130CE8u;
            // 0x130cec: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130D0Cu;
            goto label_130d0c;
        }
    }
    ctx->pc = 0x130CF0u;
    // 0x130cf0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130cf4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x130cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x130cf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130cfc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x130cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x130d00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d04: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x130d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x130d08: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_130d0c:
    // 0x130d0c: 0x2442d644  addiu       $v0, $v0, -0x29BC
    ctx->pc = 0x130d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956612));
    // 0x130d10: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x130d14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130d1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130d20: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130D20u;
    {
        const bool branch_taken_0x130d20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x130D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D20u;
        // 0x130d24: 0x941821  addu        $v1, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d20) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130D28u;
    // 0x130d28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d2c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x130d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x130d30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d34: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x130d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x130d38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d3c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x130d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_130d40:
    // 0x130d40: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x130d44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130d48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130d4c: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130D4Cu;
    {
        const bool branch_taken_0x130d4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x130D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D4Cu;
        // 0x130d50: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d4c) {
            ctx->pc = 0x130D6Cu;
            goto label_130d6c;
        }
    }
    ctx->pc = 0x130D54u;
    // 0x130d54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x130d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x130d5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d60: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x130d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x130d64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x130d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_130d6c:
    // 0x130d6c: 0x2484d64c  addiu       $a0, $a0, -0x29B4
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956620));
    // 0x130d70: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x130d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x130d74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130d78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x130d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x130d7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130d80: 0x12e20007  beq         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130D80u;
    {
        const bool branch_taken_0x130d80 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x130d80) {
            ctx->pc = 0x130DA0u;
            goto label_130da0;
        }
    }
    ctx->pc = 0x130D88u;
    // 0x130d88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d8c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x130d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x130d90: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x130d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x130d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x130d98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d9c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x130d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_130da0:
    // 0x130da0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x130da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130da4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x130da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130da8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x130da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130db0:
    // 0x130db0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x130db0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130db4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130db8: 0x0  nop
    ctx->pc = 0x130db8u;
    // NOP
    // 0x130dbc: 0x0  nop
    ctx->pc = 0x130dbcu;
    // NOP
    // 0x130dc0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130DC0u;
    {
        const bool branch_taken_0x130dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x130DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DC0u;
        // 0x130dc4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dc0) {
            ctx->pc = 0x130DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130db0;
        }
    }
    ctx->pc = 0x130DC8u;
    // 0x130dc8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130dcc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x130dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130dd0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x130dd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x130dd4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x130dd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130dd8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130dd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130ddc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130de0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x130de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130de4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x130de4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130de8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130dec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x130decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130df0: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x130DF0u;
    SET_GPR_U32(ctx, 31, 0x130DF8u);
    ctx->pc = 0x130DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DF0u;
    // 0x130df4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x130DF0u, 0x130DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DF8u;
label_130df8:
    // 0x130df8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x130df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130dfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130e00: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x130e00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x130e04: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x130e04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130e08: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x130e08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130e0c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x130e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130e10: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130e14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x130e14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130e18: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x130e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130e1c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x130e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x130e20: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x130E20u;
    SET_GPR_U32(ctx, 31, 0x130E28u);
    ctx->pc = 0x130E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E20u;
    // 0x130e24: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x130E20u, 0x130E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E28u;
label_130e28:
    // 0x130e28: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x130e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x130e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e30: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x130E30u;
    SET_GPR_U32(ctx, 31, 0x130E38u);
    ctx->pc = 0x130E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E30u;
    // 0x130e34: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x130E30u, 0x130E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E38u;
label_130e38:
    // 0x130e38: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x130e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x130e3c: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x130E3Cu;
    SET_GPR_U32(ctx, 31, 0x130E44u);
    ctx->pc = 0x130E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E3Cu;
    // 0x130e40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x130E3Cu, 0x130E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E44u;
label_130e44:
    // 0x130e44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x130e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130e48: 0x0  nop
    ctx->pc = 0x130e48u;
    // NOP
    // 0x130e4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x130e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130e50: 0x0  nop
    ctx->pc = 0x130e50u;
    // NOP
    // 0x130e54: 0x450000bf  bc1f        . + 4 + (0xBF << 2)
    ctx->pc = 0x130E54u;
    {
        const bool branch_taken_0x130e54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E54u;
        // 0x130e58: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e54) {
            ctx->pc = 0x131154u;
            goto label_131154;
        }
    }
    ctx->pc = 0x130E5Cu;
    // 0x130e5c: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x130e60: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x130e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130e64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x130e64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e68: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x130e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x130e6c: 0xc04d96e  jal         func_1365B8
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x130E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E6Cu;
    // 0x130e70: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365B8u, 0x130E6Cu, 0x130E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E74u;
label_130e74:
    // 0x130e74: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x130E74u;
    {
        const bool branch_taken_0x130e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E74u;
        // 0x130e78: 0x260800e0  addiu       $t0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e74) {
            ctx->pc = 0x131154u;
            goto label_131154;
        }
    }
    ctx->pc = 0x130E7Cu;
    // 0x130e7c: 0x8e03018c  lw          $v1, 0x18C($s0)
    ctx->pc = 0x130e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x130e80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x130E80u;
    {
        const bool branch_taken_0x130e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E80u;
        // 0x130e84: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e80) {
            ctx->pc = 0x130ED8u;
            goto label_130ed8;
        }
    }
    ctx->pc = 0x130E88u;
    // 0x130e88: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x130e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x130e8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x130E8Cu;
    {
        const bool branch_taken_0x130e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e8c) {
            ctx->pc = 0x130E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E8Cu;
            // 0x130e90: 0x8e020140  lw          $v0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130EA4u;
            goto label_130ea4;
        }
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x130e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x130e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x130E9Cu;
    {
        const bool branch_taken_0x130e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E9Cu;
        // 0x130ea0: 0xae03017c  sw          $v1, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e9c) {
            ctx->pc = 0x130ED4u;
            goto label_130ed4;
        }
    }
    ctx->pc = 0x130EA4u;
label_130ea4:
    // 0x130ea4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x130EA4u;
    {
        const bool branch_taken_0x130ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EA4u;
        // 0x130ea8: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ea4) {
            ctx->pc = 0x130ED8u;
            goto label_130ed8;
        }
    }
    ctx->pc = 0x130EACu;
    // 0x130eac: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x130eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x130eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130eb8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x130eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x130ebc: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x130ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x130ec0: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x130ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x130ec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130ec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x130ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130ecc: 0xae03017c  sw          $v1, 0x17C($s0)
    ctx->pc = 0x130eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
    // 0x130ed0: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x130ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
label_130ed4:
    // 0x130ed4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x130ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_130ed8:
    // 0x130ed8: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x130ED8u;
    {
        const bool branch_taken_0x130ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ED8u;
        // 0x130edc: 0x8fa200a8  lw          $v0, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ed8) {
            ctx->pc = 0x130FACu;
            goto label_130fac;
        }
    }
    ctx->pc = 0x130EE0u;
    // 0x130ee0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x130EE0u;
    {
        const bool branch_taken_0x130ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EE0u;
        // 0x130ee4: 0x8fa300a4  lw          $v1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ee0) {
            ctx->pc = 0x130FACu;
            goto label_130fac;
        }
    }
    ctx->pc = 0x130EE8u;
    // 0x130ee8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x130EE8u;
    {
        const bool branch_taken_0x130ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EE8u;
        // 0x130eec: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ee8) {
            ctx->pc = 0x130FB0u;
            goto label_130fb0;
        }
    }
    ctx->pc = 0x130EF0u;
    // 0x130ef0: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x130ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x130ef4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x130EF4u;
    {
        const bool branch_taken_0x130ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ef4) {
            ctx->pc = 0x130EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130EF4u;
            // 0x130ef8: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F1Cu;
            goto label_130f1c;
        }
    }
    ctx->pc = 0x130EFCu;
    // 0x130efc: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x130f00: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x130F00u;
    {
        const bool branch_taken_0x130f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F00u;
        // 0x130f04: 0xc7a40004  lwc1        $f4, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f00) {
            ctx->pc = 0x130FB4u;
            goto label_130fb4;
        }
    }
    ctx->pc = 0x130F08u;
    // 0x130f08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x130f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x130f0c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x130f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x130f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f14: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x130F14u;
    {
        const bool branch_taken_0x130f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F14u;
        // 0x130f18: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f14) {
            ctx->pc = 0x130FACu;
            goto label_130fac;
        }
    }
    ctx->pc = 0x130F1Cu;
label_130f1c:
    // 0x130f1c: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x130f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x130f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130f28: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x130f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x130f2c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x130F2Cu;
    {
        const bool branch_taken_0x130f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F2Cu;
        // 0x130f30: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f2c) {
            ctx->pc = 0x130FACu;
            goto label_130fac;
        }
    }
    ctx->pc = 0x130F34u;
    // 0x130f34: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x130F34u;
    {
        const bool branch_taken_0x130f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F34u;
        // 0x130f38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f34) {
            ctx->pc = 0x130F7Cu;
            goto label_130f7c;
        }
    }
    ctx->pc = 0x130F3Cu;
    // 0x130f3c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x130f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x130f40: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x130f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x130f44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x130f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130f48: 0x5045000c  beql        $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x130F48u;
    {
        const bool branch_taken_0x130f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x130f48) {
            ctx->pc = 0x130F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F48u;
            // 0x130f4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F7Cu;
            goto label_130f7c;
        }
    }
    ctx->pc = 0x130F50u;
    // 0x130f50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130f54: 0x0  nop
    ctx->pc = 0x130f54u;
    // NOP
label_130f58:
    // 0x130f58: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x130f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x130f5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130F5Cu;
    {
        const bool branch_taken_0x130f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F5Cu;
        // 0x130f60: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f5c) {
            ctx->pc = 0x130F7Cu;
            goto label_130f7c;
        }
    }
    ctx->pc = 0x130F64u;
    // 0x130f64: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x130f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x130f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x130f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x130f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x130f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130f70: 0x5465fff9  bnel        $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x130F70u;
    {
        const bool branch_taken_0x130f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x130f70) {
            ctx->pc = 0x130F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130F70u;
            // 0x130f74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130f58;
        }
    }
    ctx->pc = 0x130F78u;
    // 0x130f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x130f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130f7c:
    // 0x130f7c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x130F7Cu;
    {
        const bool branch_taken_0x130f7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F7Cu;
        // 0x130f80: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f7c) {
            ctx->pc = 0x130FB0u;
            goto label_130fb0;
        }
    }
    ctx->pc = 0x130F84u;
    // 0x130f84: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x130f88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130F88u;
    {
        const bool branch_taken_0x130f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F88u;
        // 0x130f8c: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f88) {
            ctx->pc = 0x130FB0u;
            goto label_130fb0;
        }
    }
    ctx->pc = 0x130F90u;
    // 0x130f90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x130f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x130f94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x130f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x130f98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x130f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x130f9c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x130f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x130fa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x130fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x130fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_130fac:
    // 0x130fac: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x130facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_130fb0:
    // 0x130fb0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x130fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_130fb4:
    // 0x130fb4: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x130fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130fb8: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x130fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130fbc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x130fbcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x130fc0: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x130fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130fc4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x130fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x130fc8: 0xc6040188  lwc1        $f4, 0x188($s0)
    ctx->pc = 0x130fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x130fcc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x130fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130fd0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x130fd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x130fd4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x130fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x130fd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x130fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x130fdc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x130fdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x130fe0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x130fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x130fe4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x130fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130fe8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x130fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130fec: 0x0  nop
    ctx->pc = 0x130fecu;
    // NOP
    // 0x130ff0: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x130FF0u;
    {
        const bool branch_taken_0x130ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FF0u;
        // 0x130ff4: 0xe6000184  swc1        $f0, 0x184($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ff0) {
            ctx->pc = 0x13114Cu;
            goto label_13114c;
        }
    }
    ctx->pc = 0x130FF8u;
    // 0x130ff8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x130ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131000: 0x26120130  addiu       $s2, $s0, 0x130
    ctx->pc = 0x131000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x131004: 0x26110120  addiu       $s1, $s0, 0x120
    ctx->pc = 0x131004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x131008: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x131008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13100c: 0x0  nop
    ctx->pc = 0x13100cu;
    // NOP
label_131010:
    // 0x131010: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x131010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131018: 0x0  nop
    ctx->pc = 0x131018u;
    // NOP
    // 0x13101c: 0x0  nop
    ctx->pc = 0x13101cu;
    // NOP
    // 0x131020: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131020u;
    {
        const bool branch_taken_0x131020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x131024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131020u;
        // 0x131024: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131020) {
            ctx->pc = 0x131010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131010;
        }
    }
    ctx->pc = 0x131028u;
    // 0x131028: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x131028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x13102c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x131030: 0x2484d644  addiu       $a0, $a0, -0x29BC
    ctx->pc = 0x131030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956612));
    // 0x131034: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x131038: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x131038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x13103c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x13103cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x131040: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131044: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x131044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x131048: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13104c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13104cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x131050: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x131050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x131054: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x131054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x131058: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13105c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13105cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131060: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x131060u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131064: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131068: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x131068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13106c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x131070: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x131070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131074: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131078: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x131078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x13107c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x13107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131080: 0x2484d64c  addiu       $a0, $a0, -0x29B4
    ctx->pc = 0x131080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956620));
    // 0x131084: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x131084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131088: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x131088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x13108c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x13108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131094: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x131094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x131098: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13109c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x13109cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1310a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1310a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1310a4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1310a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1310a8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1310a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1310ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1310acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1310b0: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1310b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1310b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1310b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1310b8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1310b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1310bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1310bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1310c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1310c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1310c4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1310c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1310c8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1310c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1310cc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1310ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d0: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1310d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1310d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1310d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310d8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1310d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1310dc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1310dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1310e0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1310e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1310e4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1310e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1310e8: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1310E8u;
    SET_GPR_U32(ctx, 31, 0x1310F0u);
    ctx->pc = 0x1310ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310E8u;
    // 0x1310ec: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1310E8u, 0x1310F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310F0u;
label_1310f0:
    // 0x1310f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1310f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1310f4: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1310F4u;
    SET_GPR_U32(ctx, 31, 0x1310FCu);
    ctx->pc = 0x1310F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1310F4u;
    // 0x1310f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1310F4u, 0x1310FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310FCu;
label_1310fc:
    // 0x1310fc: 0xc6000184  lwc1        $f0, 0x184($s0)
    ctx->pc = 0x1310fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131100: 0x123d0007  beq         $s1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x131100u;
    {
        const bool branch_taken_0x131100 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x131104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131100u;
        // 0x131104: 0xe6000188  swc1        $f0, 0x188($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131100) {
            ctx->pc = 0x131120u;
            goto label_131120;
        }
    }
    ctx->pc = 0x131108u;
    // 0x131108: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x131108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13110c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x13110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131110: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x131110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x131114: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x131114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x131118: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x131118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13111c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x13111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_131120:
    // 0x131120: 0x92020181  lbu         $v0, 0x181($s0)
    ctx->pc = 0x131120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 385)));
    // 0x131124: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x131124u;
    {
        const bool branch_taken_0x131124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131124u;
        // 0x131128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131124) {
            ctx->pc = 0x131150u;
            goto label_131150;
        }
    }
    ctx->pc = 0x13112Cu;
    // 0x13112c: 0x52d10009  beql        $s6, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13112Cu;
    {
        const bool branch_taken_0x13112c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 17));
        if (branch_taken_0x13112c) {
            ctx->pc = 0x131130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13112Cu;
            // 0x131130: 0xa2020180  sb          $v0, 0x180($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131154u;
            goto label_131154;
        }
    }
    ctx->pc = 0x131134u;
    // 0x131134: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x131134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131138: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x131138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x13113c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x13113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131140: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x131140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x131144: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x131144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131148: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x131148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_13114c:
    // 0x13114c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131150:
    // 0x131150: 0xa2020180  sb          $v0, 0x180($s0)
    ctx->pc = 0x131150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
label_131154:
    // 0x131154: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x131154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_131158:
    // 0x131158: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x131158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_13115c:
    // 0x13115c: 0x1440feb6  bnez        $v0, . + 4 + (-0x14A << 2)
    ctx->pc = 0x13115Cu;
    {
        const bool branch_taken_0x13115c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13115Cu;
        // 0x131160: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13115c) {
            ctx->pc = 0x130C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130c38;
        }
    }
    ctx->pc = 0x131164u;
label_131164:
    // 0x131164: 0x8eb50000  lw          $s5, 0x0($s5)
    ctx->pc = 0x131164u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_131168:
    // 0x131168: 0x56a0fd7d  bnel        $s5, $zero, . + 4 + (-0x283 << 2)
    ctx->pc = 0x131168u;
    {
        const bool branch_taken_0x131168 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x131168) {
            ctx->pc = 0x13116Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131168u;
            // 0x13116c: 0x9ea20008  lwu         $v0, 0x8($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130760;
        }
    }
    ctx->pc = 0x131170u;
    // 0x131170: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x131170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_131174:
    // 0x131174: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x131174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x131178: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x131178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x13117c: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x13117cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x131180: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x131180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x131184: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x131184u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x131188: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x131188u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13118c: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x13118cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x131190: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x131190u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x131194: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x131194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x131198: 0x3e00008  jr          $ra
    ctx->pc = 0x131198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131198u;
        // 0x13119c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1311A0u;
}
