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

// Function: AdxDecodeSwapCopy
// Address: 0x341120 - 0x3412d8
void AdxDecodeSwapCopy_0x341120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AdxDecodeSwapCopy_0x341120");
#endif

    switch (ctx->pc) {
        case 0x341120u: goto label_341120;
        case 0x341124u: goto label_341124;
        case 0x341128u: goto label_341128;
        case 0x34112cu: goto label_34112c;
        case 0x341130u: goto label_341130;
        case 0x341134u: goto label_341134;
        case 0x341138u: goto label_341138;
        case 0x34113cu: goto label_34113c;
        case 0x341140u: goto label_341140;
        case 0x341144u: goto label_341144;
        case 0x341148u: goto label_341148;
        case 0x34114cu: goto label_34114c;
        case 0x341150u: goto label_341150;
        case 0x341154u: goto label_341154;
        case 0x341158u: goto label_341158;
        case 0x34115cu: goto label_34115c;
        case 0x341160u: goto label_341160;
        case 0x341164u: goto label_341164;
        case 0x341168u: goto label_341168;
        case 0x34116cu: goto label_34116c;
        case 0x341170u: goto label_341170;
        case 0x341174u: goto label_341174;
        case 0x341178u: goto label_341178;
        case 0x34117cu: goto label_34117c;
        case 0x341180u: goto label_341180;
        case 0x341184u: goto label_341184;
        case 0x341188u: goto label_341188;
        case 0x34118cu: goto label_34118c;
        case 0x341190u: goto label_341190;
        case 0x341194u: goto label_341194;
        case 0x341198u: goto label_341198;
        case 0x34119cu: goto label_34119c;
        case 0x3411a0u: goto label_3411a0;
        case 0x3411a4u: goto label_3411a4;
        case 0x3411a8u: goto label_3411a8;
        case 0x3411acu: goto label_3411ac;
        case 0x3411b0u: goto label_3411b0;
        case 0x3411b4u: goto label_3411b4;
        case 0x3411b8u: goto label_3411b8;
        case 0x3411bcu: goto label_3411bc;
        case 0x3411c0u: goto label_3411c0;
        case 0x3411c4u: goto label_3411c4;
        case 0x3411c8u: goto label_3411c8;
        case 0x3411ccu: goto label_3411cc;
        case 0x3411d0u: goto label_3411d0;
        case 0x3411d4u: goto label_3411d4;
        case 0x3411d8u: goto label_3411d8;
        case 0x3411dcu: goto label_3411dc;
        case 0x3411e0u: goto label_3411e0;
        case 0x3411e4u: goto label_3411e4;
        case 0x3411e8u: goto label_3411e8;
        case 0x3411ecu: goto label_3411ec;
        case 0x3411f0u: goto label_3411f0;
        case 0x3411f4u: goto label_3411f4;
        case 0x3411f8u: goto label_3411f8;
        case 0x3411fcu: goto label_3411fc;
        case 0x341200u: goto label_341200;
        case 0x341204u: goto label_341204;
        case 0x341208u: goto label_341208;
        case 0x34120cu: goto label_34120c;
        case 0x341210u: goto label_341210;
        case 0x341214u: goto label_341214;
        case 0x341218u: goto label_341218;
        case 0x34121cu: goto label_34121c;
        case 0x341220u: goto label_341220;
        case 0x341224u: goto label_341224;
        case 0x341228u: goto label_341228;
        case 0x34122cu: goto label_34122c;
        case 0x341230u: goto label_341230;
        case 0x341234u: goto label_341234;
        case 0x341238u: goto label_341238;
        case 0x34123cu: goto label_34123c;
        case 0x341240u: goto label_341240;
        case 0x341244u: goto label_341244;
        case 0x341248u: goto label_341248;
        case 0x34124cu: goto label_34124c;
        case 0x341250u: goto label_341250;
        case 0x341254u: goto label_341254;
        case 0x341258u: goto label_341258;
        case 0x34125cu: goto label_34125c;
        case 0x341260u: goto label_341260;
        case 0x341264u: goto label_341264;
        case 0x341268u: goto label_341268;
        case 0x34126cu: goto label_34126c;
        case 0x341270u: goto label_341270;
        case 0x341274u: goto label_341274;
        case 0x341278u: goto label_341278;
        case 0x34127cu: goto label_34127c;
        case 0x341280u: goto label_341280;
        case 0x341284u: goto label_341284;
        case 0x341288u: goto label_341288;
        case 0x34128cu: goto label_34128c;
        case 0x341290u: goto label_341290;
        case 0x341294u: goto label_341294;
        case 0x341298u: goto label_341298;
        case 0x34129cu: goto label_34129c;
        case 0x3412a0u: goto label_3412a0;
        case 0x3412a4u: goto label_3412a4;
        case 0x3412a8u: goto label_3412a8;
        case 0x3412acu: goto label_3412ac;
        case 0x3412b0u: goto label_3412b0;
        case 0x3412b4u: goto label_3412b4;
        case 0x3412b8u: goto label_3412b8;
        case 0x3412bcu: goto label_3412bc;
        case 0x3412c0u: goto label_3412c0;
        case 0x3412c4u: goto label_3412c4;
        case 0x3412c8u: goto label_3412c8;
        case 0x3412ccu: goto label_3412cc;
        case 0x3412d0u: goto label_3412d0;
        case 0x3412d4u: goto label_3412d4;
        default: break;
    }

    ctx->pc = 0x341120u;

label_341120:
    // 0x341120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x341120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_341124:
    // 0x341124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341128:
    // 0x341128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34112c:
    // 0x34112c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34112cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341130:
    // 0x341130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x341130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_341134:
    // 0x341134: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x341134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_341138:
    // 0x341138: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x341138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34113c:
    // 0x34113c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_341140:
    // 0x341140: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x341140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341144:
    // 0x341144: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_341148:
    if (ctx->pc == 0x341148u) {
        ctx->pc = 0x341148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341144u;
        // 0x341148: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34114Cu;
        goto label_34114c;
    }
    ctx->pc = 0x341144u;
    {
        const bool branch_taken_0x341144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x341148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341144u;
        // 0x341148: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341144) {
            ctx->pc = 0x341294u;
            goto label_341294;
        }
    }
    ctx->pc = 0x34114Cu;
label_34114c:
    // 0x34114c: 0xc0cfe9a  jal         func_33FA68
label_341150:
    if (ctx->pc == 0x341150u) {
        ctx->pc = 0x341150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34114Cu;
        // 0x341150: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341154u;
        goto label_341154;
    }
    ctx->pc = 0x34114Cu;
    SET_GPR_U32(ctx, 31, 0x341154u);
    ctx->pc = 0x341150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34114Cu;
    // 0x341150: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x34114Cu, 0x341154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341154u;
label_341154:
    // 0x341154: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_341158:
    if (ctx->pc == 0x341158u) {
        ctx->pc = 0x341158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341154u;
        // 0x341158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34115Cu;
        goto label_34115c;
    }
    ctx->pc = 0x341154u;
    {
        const bool branch_taken_0x341154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341154) {
            ctx->pc = 0x341158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341154u;
            // 0x341158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341294u;
            goto label_341294;
        }
    }
    ctx->pc = 0x34115Cu;
label_34115c:
    // 0x34115c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x34115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_341160:
    // 0x341160: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x341160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_341164:
    // 0x341164: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x341164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_341168:
    // 0x341168: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x341168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_34116c:
    // 0x34116c: 0x40f809  jalr        $v0
label_341170:
    if (ctx->pc == 0x341170u) {
        ctx->pc = 0x341170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34116Cu;
        // 0x341170: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341174u;
        goto label_341174;
    }
    ctx->pc = 0x34116Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x341174u);
        ctx->pc = 0x341170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34116Cu;
        // 0x341170: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34116Cu, 0x341174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341174u;
label_341174:
    // 0x341174: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x341174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_341178:
    // 0x341178: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x341178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_34117c:
    // 0x34117c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341180:
    // 0x341180: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x341180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_341184:
    // 0x341184: 0x875023  subu        $t2, $a0, $a3
    ctx->pc = 0x341184u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_341188:
    // 0x341188: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_34118c:
    // 0x34118c: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x34118cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_341190:
    // 0x341190: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x341190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_341194:
    // 0x341194: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x341194u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_341198:
    // 0x341198: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x341198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_34119c:
    // 0x34119c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x34119cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3411a0:
    // 0x3411a0: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x3411a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_3411a4:
    // 0x3411a4: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x3411a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_3411a8:
    // 0x3411a8: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x3411a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3411ac:
    // 0x3411ac: 0x14860020  bne         $a0, $a2, . + 4 + (0x20 << 2)
label_3411b0:
    if (ctx->pc == 0x3411B0u) {
        ctx->pc = 0x3411B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411ACu;
        // 0x3411b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3411B4u;
        goto label_3411b4;
    }
    ctx->pc = 0x3411ACu;
    {
        const bool branch_taken_0x3411ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3411B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411ACu;
        // 0x3411b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411ac) {
            ctx->pc = 0x341230u;
            goto label_341230;
        }
    }
    ctx->pc = 0x3411B4u;
label_3411b4:
    // 0x3411b4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3411b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3411b8:
    // 0x3411b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3411b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3411bc:
    // 0x3411bc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3411bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3411c0:
    // 0x3411c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3411c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3411c4:
    // 0x3411c4: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
label_3411c8:
    if (ctx->pc == 0x3411C8u) {
        ctx->pc = 0x3411C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411C4u;
        // 0x3411c8: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3411CCu;
        goto label_3411cc;
    }
    ctx->pc = 0x3411C4u;
    {
        const bool branch_taken_0x3411c4 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x3411C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411C4u;
        // 0x3411c8: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3411c4) {
            ctx->pc = 0x341274u;
            goto label_341274;
        }
    }
    ctx->pc = 0x3411CCu;
label_3411cc:
    // 0x3411cc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3411ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3411d0:
    // 0x3411d0: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x3411d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3411d4:
    // 0x3411d4: 0x0  nop
    ctx->pc = 0x3411d4u;
    // NOP
label_3411d8:
    // 0x3411d8: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x3411d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3411dc:
    // 0x3411dc: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x3411dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_3411e0:
    // 0x3411e0: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x3411e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_3411e4:
    // 0x3411e4: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x3411e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_3411e8:
    // 0x3411e8: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x3411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3411ec:
    // 0x3411ec: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x3411ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_3411f0:
    // 0x3411f0: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x3411f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_3411f4:
    // 0x3411f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3411f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3411f8:
    // 0x3411f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3411f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3411fc:
    // 0x3411fc: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x3411fcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_341200:
    // 0x341200: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x341200u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_341204:
    // 0x341204: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x341204u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_341208:
    // 0x341208: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x341208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_34120c:
    // 0x34120c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x34120cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_341210:
    // 0x341210: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x341210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_341214:
    // 0x341214: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x341214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_341218:
    // 0x341218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x341218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34121c:
    // 0x34121c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_341220:
    if (ctx->pc == 0x341220u) {
        ctx->pc = 0x341220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34121Cu;
        // 0x341220: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341224u;
        goto label_341224;
    }
    ctx->pc = 0x34121Cu;
    {
        const bool branch_taken_0x34121c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x341220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34121Cu;
        // 0x341220: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34121c) {
            ctx->pc = 0x3411D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3411d8;
        }
    }
    ctx->pc = 0x341224u;
label_341224:
    // 0x341224: 0x10000013  b           . + 4 + (0x13 << 2)
label_341228:
    if (ctx->pc == 0x341228u) {
        ctx->pc = 0x341228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341224u;
        // 0x341228: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34122Cu;
        goto label_34122c;
    }
    ctx->pc = 0x341224u;
    {
        const bool branch_taken_0x341224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341224u;
        // 0x341228: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341224) {
            ctx->pc = 0x341274u;
            goto label_341274;
        }
    }
    ctx->pc = 0x34122Cu;
label_34122c:
    // 0x34122c: 0x0  nop
    ctx->pc = 0x34122cu;
    // NOP
label_341230:
    // 0x341230: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
label_341234:
    if (ctx->pc == 0x341234u) {
        ctx->pc = 0x341234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341230u;
        // 0x341234: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341238u;
        goto label_341238;
    }
    ctx->pc = 0x341230u;
    {
        const bool branch_taken_0x341230 = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x341234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341230u;
        // 0x341234: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341230) {
            ctx->pc = 0x341274u;
            goto label_341274;
        }
    }
    ctx->pc = 0x341238u;
label_341238:
    // 0x341238: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x341238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_34123c:
    // 0x34123c: 0x0  nop
    ctx->pc = 0x34123cu;
    // NOP
label_341240:
    // 0x341240: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_341244:
    // 0x341244: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x341244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_341248:
    // 0x341248: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x341248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_34124c:
    // 0x34124c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x34124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_341250:
    // 0x341250: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x341250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341254:
    // 0x341254: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x341254u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_341258:
    // 0x341258: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x341258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_34125c:
    // 0x34125c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x34125cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_341260:
    // 0x341260: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x341260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_341264:
    // 0x341264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x341264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_341268:
    // 0x341268: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_34126c:
    if (ctx->pc == 0x34126Cu) {
        ctx->pc = 0x34126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341268u;
        // 0x34126c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341270u;
        goto label_341270;
    }
    ctx->pc = 0x341268u;
    {
        const bool branch_taken_0x341268 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341268u;
        // 0x34126c: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341268) {
            ctx->pc = 0x341240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341240;
        }
    }
    ctx->pc = 0x341270u;
label_341270:
    // 0x341270: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x341270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_341274:
    // 0x341274: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x341274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_341278:
    // 0x341278: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34127c:
    // 0x34127c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x34127cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_341280:
    // 0x341280: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x341280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_341284:
    // 0x341284: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x341284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_341288:
    // 0x341288: 0xae0a0090  sw          $t2, 0x90($s0)
    ctx->pc = 0x341288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 10));
label_34128c:
    // 0x34128c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34128cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_341290:
    // 0x341290: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x341290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_341294:
    // 0x341294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_341298:
    // 0x341298: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_34129c:
    if (ctx->pc == 0x34129Cu) {
        ctx->pc = 0x34129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341298u;
        // 0x34129c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3412A0u;
        goto label_3412a0;
    }
    ctx->pc = 0x341298u;
    {
        const bool branch_taken_0x341298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x341298) {
            ctx->pc = 0x34129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341298u;
            // 0x34129c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3412C0u;
            goto label_3412c0;
        }
    }
    ctx->pc = 0x3412A0u;
label_3412a0:
    // 0x3412a0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3412a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3412a4:
    // 0x3412a4: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3412a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3412a8:
    // 0x3412a8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3412a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3412ac:
    // 0x3412ac: 0x60f809  jalr        $v1
label_3412b0:
    if (ctx->pc == 0x3412B0u) {
        ctx->pc = 0x3412B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412ACu;
        // 0x3412b0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3412B4u;
        goto label_3412b4;
    }
    ctx->pc = 0x3412ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3412B4u);
        ctx->pc = 0x3412B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412ACu;
        // 0x3412b0: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3412ACu, 0x3412B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3412B4u;
label_3412b4:
    // 0x3412b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3412b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3412b8:
    // 0x3412b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3412b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3412bc:
    // 0x3412bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3412bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3412c0:
    // 0x3412c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3412c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3412c4:
    // 0x3412c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3412c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3412c8:
    // 0x3412c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3412c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3412cc:
    // 0x3412cc: 0x3e00008  jr          $ra
label_3412d0:
    if (ctx->pc == 0x3412D0u) {
        ctx->pc = 0x3412D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412CCu;
        // 0x3412d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3412D4u;
        goto label_3412d4;
    }
    ctx->pc = 0x3412CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3412D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3412CCu;
        // 0x3412d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3412CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3412D4u;
label_3412d4:
    // 0x3412d4: 0x0  nop
    ctx->pc = 0x3412d4u;
    // NOP
    ctx->pc = 0x3412d8u;
}
