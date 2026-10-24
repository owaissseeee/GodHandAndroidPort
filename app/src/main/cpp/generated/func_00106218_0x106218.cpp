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

// Function: func_00106218
// Address: 0x106218 - 0x1067b8
void func_00106218_0x106218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00106218_0x106218");
#endif

    switch (ctx->pc) {
        case 0x1062d0u: goto label_1062d0;
        case 0x106370u: goto label_106370;
        case 0x1063b4u: goto label_1063b4;
        case 0x1064d4u: goto label_1064d4;
        case 0x1064fcu: goto label_1064fc;
        case 0x10658cu: goto label_10658c;
        case 0x10659cu: goto label_10659c;
        case 0x1065acu: goto label_1065ac;
        case 0x10661cu: goto label_10661c;
        case 0x10668cu: goto label_10668c;
        case 0x106750u: goto label_106750;
        default: break;
    }

    ctx->pc = 0x106218u;

    // 0x106218: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x106218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x10621c: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x10621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x106220: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x106220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x106224: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x106224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106228: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x106228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x10622c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10622cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106230: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x106230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x106234: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x106234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x106238: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x106238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x10623c: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x10623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x106240: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x106240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x106244: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x106244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x106248: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x106248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10624c: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x10624cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x106250: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x106250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x106254: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x106254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x106258: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x106258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10625c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x10625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106260: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x106260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106264: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x106264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106268: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x106268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10626c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x10626cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106270: 0x12800142  beqz        $s4, . + 4 + (0x142 << 2)
    ctx->pc = 0x106270u;
    {
        const bool branch_taken_0x106270 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x106274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106270u;
        // 0x106274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106270) {
            ctx->pc = 0x10677Cu;
            goto label_10677c;
        }
    }
    ctx->pc = 0x106278u;
    // 0x106278: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x106278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10627c: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x10627Cu;
    {
        const bool branch_taken_0x10627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10627Cu;
        // 0x106280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10627c) {
            ctx->pc = 0x10677Cu;
            goto label_10677c;
        }
    }
    ctx->pc = 0x106284u;
    // 0x106284: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x106284u;
    {
        const bool branch_taken_0x106284 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x106288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106284u;
        // 0x106288: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106284) {
            ctx->pc = 0x106294u;
            goto label_106294;
        }
    }
    ctx->pc = 0x10628Cu;
    // 0x10628c: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x10628Cu;
    {
        const bool branch_taken_0x10628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10628Cu;
        // 0x106290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10628c) {
            ctx->pc = 0x10677Cu;
            goto label_10677c;
        }
    }
    ctx->pc = 0x106294u;
label_106294:
    // 0x106294: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x106294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10629c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x10629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1062a0: 0x24841600  addiu       $a0, $a0, 0x1600
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
    // 0x1062a4: 0xac431600  sw          $v1, 0x1600($v0)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5632), GPR_U32(ctx, 3));
    // 0x1062a8: 0x24960008  addiu       $s6, $a0, 0x8
    ctx->pc = 0x1062a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1062ac: 0x10600131  beqz        $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x1062ACu;
    {
        const bool branch_taken_0x1062ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ACu;
        // 0x1062b0: 0xac960004  sw          $s6, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ac) {
            ctx->pc = 0x106774u;
            goto label_106774;
        }
    }
    ctx->pc = 0x1062B4u;
    // 0x1062b4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1062b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1062b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1062bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1062bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1062c0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1062c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1062c4: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x1062c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1062c8: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1062cc: 0x24910098  addiu       $s1, $a0, 0x98
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
label_1062d0:
    // 0x1062d0: 0x92840002  lbu         $a0, 0x2($s4)
    ctx->pc = 0x1062d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1062d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d8: 0x92a302b4  lbu         $v1, 0x2B4($s5)
    ctx->pc = 0x1062d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x1062dc: 0x92860003  lbu         $a2, 0x3($s4)
    ctx->pc = 0x1062dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x1062e0: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1062e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1062e4: 0xc6940004  lwc1        $f20, 0x4($s4)
    ctx->pc = 0x1062e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1062e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062E8u;
    {
        const bool branch_taken_0x1062e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062E8u;
        // 0x1062ec: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062e8) {
            ctx->pc = 0x1062F8u;
            goto label_1062f8;
        }
    }
    ctx->pc = 0x1062F0u;
    // 0x1062f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1062f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1062f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1062f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1062f8:
    // 0x1062f8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1062f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1062fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1062FCu;
    {
        const bool branch_taken_0x1062fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062FCu;
        // 0x106300: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062fc) {
            ctx->pc = 0x106314u;
            goto label_106314;
        }
    }
    ctx->pc = 0x106304u;
    // 0x106304: 0x8ea30278  lw          $v1, 0x278($s5)
    ctx->pc = 0x106304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x106308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10630c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10630Cu;
    {
        const bool branch_taken_0x10630c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10630Cu;
        // 0x106310: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10630c) {
            ctx->pc = 0x106318u;
            goto label_106318;
        }
    }
    ctx->pc = 0x106314u;
label_106314:
    // 0x106314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106318:
    // 0x106318: 0x92a302b4  lbu         $v1, 0x2B4($s5)
    ctx->pc = 0x106318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x10631c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10631cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106320: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x106320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x106324: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106324u;
    {
        const bool branch_taken_0x106324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106324u;
        // 0x106328: 0xafa30060  sw          $v1, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106324) {
            ctx->pc = 0x106334u;
            goto label_106334;
        }
    }
    ctx->pc = 0x10632Cu;
    // 0x10632c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x10632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x106330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_106334:
    // 0x106334: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x106334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x106338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106338u;
    {
        const bool branch_taken_0x106338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106338u;
        // 0x10633c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106338) {
            ctx->pc = 0x106350u;
            goto label_106350;
        }
    }
    ctx->pc = 0x106340u;
    // 0x106340: 0x8ea30278  lw          $v1, 0x278($s5)
    ctx->pc = 0x106340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x106344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x106344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106348u;
    {
        const bool branch_taken_0x106348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106348u;
        // 0x10634c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106348) {
            ctx->pc = 0x106354u;
            goto label_106354;
        }
    }
    ctx->pc = 0x106350u;
label_106350:
    // 0x106350: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x106350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106354:
    // 0x106354: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x106354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x106358: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x10635c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10635cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106360: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x106360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106364: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x106364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106368: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x106368u;
    SET_GPR_U32(ctx, 31, 0x106370u);
    ctx->pc = 0x10636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106368u;
    // 0x10636c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x106368u, 0x106370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106370u;
label_106370:
    // 0x106370: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x106370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x106374: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x106374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106378: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x106378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10637c: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10637Cu;
    {
        const bool branch_taken_0x10637c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x106380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10637Cu;
        // 0x106380: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10637c) {
            ctx->pc = 0x106398u;
            goto label_106398;
        }
    }
    ctx->pc = 0x106384u;
    // 0x106384: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x106384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106388: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x106388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10638c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10638cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x106390: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x106390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x106394: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x106394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_106398:
    // 0x106398: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x106398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x10639c: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x10639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1063a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1063a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1063a4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1063a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1063a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1063a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063ac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1063ACu;
    SET_GPR_U32(ctx, 31, 0x1063B4u);
    ctx->pc = 0x1063B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063ACu;
    // 0x1063b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1063ACu, 0x1063B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1063B4u;
label_1063b4:
    // 0x1063b4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1063b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1063b8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1063b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1063bc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1063bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1063c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1063c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1063c4: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x1063c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1063c8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1063c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1063cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1063ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1063d0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1063d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1063d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1063d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1063d8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1063d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1063dc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x1063dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1063e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1063E0u;
    {
        const bool branch_taken_0x1063e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063E0u;
        // 0x1063e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063e0) {
            ctx->pc = 0x1063F0u;
            goto label_1063f0;
        }
    }
    ctx->pc = 0x1063E8u;
    // 0x1063e8: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1063E8u;
    {
        const bool branch_taken_0x1063e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1063e8) {
            ctx->pc = 0x1063ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1063E8u;
            // 0x1063ec: 0xae23ff70  sw          $v1, -0x90($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294967152), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106468u;
            goto label_106468;
        }
    }
    ctx->pc = 0x1063F0u;
label_1063f0:
    // 0x1063f0: 0x4614a981  sub.s       $f6, $f21, $f20
    ctx->pc = 0x1063f0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x1063f4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1063f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1063f8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1063f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1063fc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1063fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106400: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x106400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106404: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x106404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x106408: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x106408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10640c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x10640cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x106410: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x106410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x106414: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x106414u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x106418: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x106418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10641c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x10641cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x106420: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x106420u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x106424: 0xae20ff70  sw          $zero, -0x90($s1)
    ctx->pc = 0x106424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967152), GPR_U32(ctx, 0));
    // 0x106428: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x106428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x10642c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x10642cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x106430: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x106430u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x106434: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x106434u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x106438: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x106438u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10643c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x10643cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x106440: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106440u;
    {
        const bool branch_taken_0x106440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x106444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106440u;
        // 0x106444: 0xe7a50028  swc1        $f5, 0x28($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106440) {
            ctx->pc = 0x106454u;
            goto label_106454;
        }
    }
    ctx->pc = 0x106448u;
    // 0x106448: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x106448u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x10644c: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x10644cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x106450: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x106450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_106454:
    // 0x106454: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x106454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106458: 0xc6a10114  lwc1        $f1, 0x114($s5)
    ctx->pc = 0x106458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10645c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10645cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x106460: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x106460u;
    {
        const bool branch_taken_0x106460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106460u;
        // 0x106464: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106460) {
            ctx->pc = 0x106750u;
            goto label_106750;
        }
    }
    ctx->pc = 0x106468u;
label_106468:
    // 0x106468: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x106468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10646c: 0x123d0007  beq         $s1, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x10646Cu;
    {
        const bool branch_taken_0x10646c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x106470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10646Cu;
        // 0x106470: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10646c) {
            ctx->pc = 0x10648Cu;
            goto label_10648c;
        }
    }
    ctx->pc = 0x106474u;
    // 0x106474: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x106474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106478: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x106478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10647c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x10647cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106480: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x106480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x106484: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x106484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x106488: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x106488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_10648c:
    // 0x10648c: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x10648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x106490: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x106494: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106494u;
    {
        const bool branch_taken_0x106494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x106498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106494u;
        // 0x106498: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106494) {
            ctx->pc = 0x1064B0u;
            goto label_1064b0;
        }
    }
    ctx->pc = 0x10649Cu;
    // 0x10649c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x10649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1064a0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1064a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1064a4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1064a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1064a8: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1064a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1064ac: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x1064acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1064b0:
    // 0x1064b0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1064b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1064b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1064b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064b8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1064b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1064bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1064bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1064c0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1064c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1064c4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1064c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1064c8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1064c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1064cc: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1064CCu;
    SET_GPR_U32(ctx, 31, 0x1064D4u);
    ctx->pc = 0x1064D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1064CCu;
    // 0x1064d0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1064CCu, 0x1064D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064D4u;
label_1064d4:
    // 0x1064d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1064d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1064d8: 0x0  nop
    ctx->pc = 0x1064d8u;
    // NOP
    // 0x1064dc: 0x0  nop
    ctx->pc = 0x1064dcu;
    // NOP
    // 0x1064e0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1064e0u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x1064e4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1064e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1064e8: 0x0  nop
    ctx->pc = 0x1064e8u;
    // NOP
    // 0x1064ec: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1064ECu;
    {
        const bool branch_taken_0x1064ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1064ec) {
            ctx->pc = 0x1064F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1064ECu;
            // 0x1064f0: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106500u;
            goto label_106500;
        }
    }
    ctx->pc = 0x1064F4u;
    // 0x1064f4: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1064F4u;
    SET_GPR_U32(ctx, 31, 0x1064FCu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1064F4u, 0x1064FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064FCu;
label_1064fc:
    // 0x1064fc: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1064fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_106500:
    // 0x106500: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x106500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106504: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x106504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106508: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x106508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10650c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10650cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x106510: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x106510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106514: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x106514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106518: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x106518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10651c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x10651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106520: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x106520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106524: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x106524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106528: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x106528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10652c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x10652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106530: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x106530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x106534: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x106534u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x106538: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x106538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x10653c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x10653cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x106540: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x106540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106544: 0x0  nop
    ctx->pc = 0x106544u;
    // NOP
    // 0x106548: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x106548u;
    {
        const bool branch_taken_0x106548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106548u;
        // 0x10654c: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106548) {
            ctx->pc = 0x106564u;
            goto label_106564;
        }
    }
    ctx->pc = 0x106550u;
    // 0x106550: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x106550u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x106554: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x106554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x106558: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x106558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x10655c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10655Cu;
    {
        const bool branch_taken_0x10655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10655Cu;
        // 0x106560: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10655c) {
            ctx->pc = 0x106578u;
            goto label_106578;
        }
    }
    ctx->pc = 0x106564u;
label_106564:
    // 0x106564: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x106564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x106568: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x106568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10656c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x10656cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x106570: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x106570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x106574: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x106574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_106578:
    // 0x106578: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x106578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10657c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106584: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x106584u;
    SET_GPR_U32(ctx, 31, 0x10658Cu);
    ctx->pc = 0x106588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106584u;
    // 0x106588: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x106584u, 0x10658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10658Cu;
label_10658c:
    // 0x10658c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106590: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x106590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106594: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x106594u;
    SET_GPR_U32(ctx, 31, 0x10659Cu);
    ctx->pc = 0x106598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106594u;
    // 0x106598: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x106594u, 0x10659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10659Cu;
label_10659c:
    // 0x10659c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x10659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1065a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1065a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1065a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1065A4u;
    SET_GPR_U32(ctx, 31, 0x1065ACu);
    ctx->pc = 0x1065A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1065A4u;
    // 0x1065a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1065A4u, 0x1065ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1065ACu;
label_1065ac:
    // 0x1065ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1065acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1065b0: 0x0  nop
    ctx->pc = 0x1065b0u;
    // NOP
    // 0x1065b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1065B4u;
    {
        const bool branch_taken_0x1065b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1065B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065B4u;
        // 0x1065b8: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065b4) {
            ctx->pc = 0x1065F0u;
            goto label_1065f0;
        }
    }
    ctx->pc = 0x1065BCu;
    // 0x1065bc: 0x0  nop
    ctx->pc = 0x1065bcu;
    // NOP
    // 0x1065c0: 0x0  nop
    ctx->pc = 0x1065c0u;
    // NOP
    // 0x1065c4: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1065c4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1065c8: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x1065c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1065cc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1065ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1065d0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1065d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1065d4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1065d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1065d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1065d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1065dc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1065dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1065e0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1065e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1065e4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1065e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1065e8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1065e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1065ec: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x1065ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1065f0:
    // 0x1065f0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1065f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1065f4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1065f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1065f8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1065f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1065fc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1065fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106600: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x106600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106604: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x106604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x106608: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x106608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x10660c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x10660cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x106610: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x106610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106614: 0xc04078a  jal         func_101E28
    ctx->pc = 0x106614u;
    SET_GPR_U32(ctx, 31, 0x10661Cu);
    ctx->pc = 0x106618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106614u;
    // 0x106618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x106614u, 0x10661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10661Cu;
label_10661c:
    // 0x10661c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10661cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106620: 0x0  nop
    ctx->pc = 0x106620u;
    // NOP
    // 0x106624: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106624u;
    {
        const bool branch_taken_0x106624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106624u;
        // 0x106628: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106624) {
            ctx->pc = 0x106660u;
            goto label_106660;
        }
    }
    ctx->pc = 0x10662Cu;
    // 0x10662c: 0x0  nop
    ctx->pc = 0x10662cu;
    // NOP
    // 0x106630: 0x0  nop
    ctx->pc = 0x106630u;
    // NOP
    // 0x106634: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x106634u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x106638: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x106638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10663c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x10663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106640: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x106640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106644: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x106644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x106648: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x106648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x10664c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x10664cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x106650: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x106650u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x106654: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x106654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x106658: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x106658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10665c: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x10665cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_106660:
    // 0x106660: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x106660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106664: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x106664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106668: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x106668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10666c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x10666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106670: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x106670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106674: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x106674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106678: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x106678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10667c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x10667cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x106680: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x106680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106684: 0xc04078a  jal         func_101E28
    ctx->pc = 0x106684u;
    SET_GPR_U32(ctx, 31, 0x10668Cu);
    ctx->pc = 0x106688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106684u;
    // 0x106688: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x106684u, 0x10668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10668Cu;
label_10668c:
    // 0x10668c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10668cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106690: 0x0  nop
    ctx->pc = 0x106690u;
    // NOP
    // 0x106694: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106694u;
    {
        const bool branch_taken_0x106694 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106694u;
        // 0x106698: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106694) {
            ctx->pc = 0x1066D0u;
            goto label_1066d0;
        }
    }
    ctx->pc = 0x10669Cu;
    // 0x10669c: 0x0  nop
    ctx->pc = 0x10669cu;
    // NOP
    // 0x1066a0: 0x0  nop
    ctx->pc = 0x1066a0u;
    // NOP
    // 0x1066a4: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1066a4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1066a8: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1066a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1066ac: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1066acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1066b0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1066b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1066b4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1066b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1066b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1066b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1066bc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1066bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1066c0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1066c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1066c4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1066c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1066c8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1066c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1066cc: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x1066ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1066d0:
    // 0x1066d0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1066d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1066d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1066d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1066d8: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x1066d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1066dc: 0x26c40050  addiu       $a0, $s6, 0x50
    ctx->pc = 0x1066dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x1066e0: 0xc7aa0064  lwc1        $f10, 0x64($sp)
    ctx->pc = 0x1066e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1066e4: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x1066e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1066e8: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x1066e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1066ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1066ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1066f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1066f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1066f4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1066f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1066f8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1066f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1066fc: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1066fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106700: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x106700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x106704: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x106704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x106708: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x106708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x10670c: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x10670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x106710: 0xe620ff80  swc1        $f0, -0x80($s1)
    ctx->pc = 0x106710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967168), bits); }
    // 0x106714: 0xe621ff84  swc1        $f1, -0x7C($s1)
    ctx->pc = 0x106714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967172), bits); }
    // 0x106718: 0xe622ff88  swc1        $f2, -0x78($s1)
    ctx->pc = 0x106718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967176), bits); }
    // 0x10671c: 0xe623ff90  swc1        $f3, -0x70($s1)
    ctx->pc = 0x10671cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967184), bits); }
    // 0x106720: 0xe624ff94  swc1        $f4, -0x6C($s1)
    ctx->pc = 0x106720u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967188), bits); }
    // 0x106724: 0xe625ff98  swc1        $f5, -0x68($s1)
    ctx->pc = 0x106724u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967192), bits); }
    // 0x106728: 0xe62bffa0  swc1        $f11, -0x60($s1)
    ctx->pc = 0x106728u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967200), bits); }
    // 0x10672c: 0xe62affa4  swc1        $f10, -0x5C($s1)
    ctx->pc = 0x10672cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967204), bits); }
    // 0x106730: 0xe629ffa8  swc1        $f9, -0x58($s1)
    ctx->pc = 0x106730u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967208), bits); }
    // 0x106734: 0xe626ffb0  swc1        $f6, -0x50($s1)
    ctx->pc = 0x106734u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967216), bits); }
    // 0x106738: 0xe627ffb4  swc1        $f7, -0x4C($s1)
    ctx->pc = 0x106738u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967220), bits); }
    // 0x10673c: 0xe628ffb8  swc1        $f8, -0x48($s1)
    ctx->pc = 0x10673cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967224), bits); }
    // 0x106740: 0xe7ab0050  swc1        $f11, 0x50($sp)
    ctx->pc = 0x106740u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x106744: 0xe7aa0054  swc1        $f10, 0x54($sp)
    ctx->pc = 0x106744u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x106748: 0xc051d5a  jal         func_147568
    ctx->pc = 0x106748u;
    SET_GPR_U32(ctx, 31, 0x106750u);
    ctx->pc = 0x10674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106748u;
    // 0x10674c: 0xe7a90058  swc1        $f9, 0x58($sp) (Delay Slot)
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x106748u, 0x106750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106750u;
label_106750:
    // 0x106750: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x106754: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x106754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x106758: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x106758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10675c: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x106760: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106764: 0x26d600c0  addiu       $s6, $s6, 0xC0
    ctx->pc = 0x106764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x106768: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x106768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10676c: 0x1440fed8  bnez        $v0, . + 4 + (-0x128 << 2)
    ctx->pc = 0x10676Cu;
    {
        const bool branch_taken_0x10676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10676Cu;
        // 0x106770: 0xafa40094  sw          $a0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10676c) {
            ctx->pc = 0x1062D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1062d0;
        }
    }
    ctx->pc = 0x106774u;
label_106774:
    // 0x106774: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x106774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x106778: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x106778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
label_10677c:
    // 0x10677c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x10677cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x106780: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x106780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x106784: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x106784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x106788: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x106788u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10678c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x10678cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x106790: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x106790u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x106794: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x106794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x106798: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x106798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10679c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x10679cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1067a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1067a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1067a4: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x1067a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1067a8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1067a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1067ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1067ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067ACu;
        // 0x1067b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1067ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1067B4u;
    // 0x1067b4: 0x0  nop
    ctx->pc = 0x1067b4u;
    // NOP
    ctx->pc = 0x1067b8u;
}
