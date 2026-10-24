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

// Function: func_00309568
// Address: 0x309568 - 0x3099d8
void func_00309568_0x309568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00309568_0x309568");
#endif

    switch (ctx->pc) {
        case 0x309650u: goto label_309650;
        case 0x309800u: goto label_309800;
        case 0x309830u: goto label_309830;
        case 0x30985cu: goto label_30985c;
        case 0x309874u: goto label_309874;
        case 0x309884u: goto label_309884;
        case 0x309890u: goto label_309890;
        case 0x3098a0u: goto label_3098a0;
        case 0x3098e0u: goto label_3098e0;
        case 0x3098fcu: goto label_3098fc;
        case 0x309928u: goto label_309928;
        case 0x309930u: goto label_309930;
        case 0x30993cu: goto label_30993c;
        case 0x309948u: goto label_309948;
        default: break;
    }

    ctx->pc = 0x309568u;

    // 0x309568: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x309568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x30956c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x30956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x309570: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x309570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x309574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x309574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309578: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x309578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x30957c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x30957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x309580: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x309580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x309584: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x309584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x309588: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x309588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x30958c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x309590: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x309590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x309594: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x309594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x309598: 0x92620012  lbu         $v0, 0x12($s3)
    ctx->pc = 0x309598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x30959c: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x30959Cu;
    {
        const bool branch_taken_0x30959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30959Cu;
        // 0x3095a0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30959c) {
            ctx->pc = 0x3099A0u;
            goto label_3099a0;
        }
    }
    ctx->pc = 0x3095A4u;
    // 0x3095a4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3095a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x3095a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3095a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3095ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3095ACu;
    {
        const bool branch_taken_0x3095ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3095B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095ACu;
        // 0x3095b0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095ac) {
            ctx->pc = 0x3095C0u;
            goto label_3095c0;
        }
    }
    ctx->pc = 0x3095B4u;
    // 0x3095b4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3095b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3095b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3095b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3095bc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x3095bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_3095c0:
    // 0x3095c0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x3095c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x3095c4: 0x3403ff87  ori         $v1, $zero, 0xFF87
    ctx->pc = 0x3095c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x3095c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3095c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3095cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3095ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3095d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3095d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3095d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3095d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3095d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3095d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3095dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3095dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3095e0: 0x1024fc  dsll32      $a0, $s0, 19
    ctx->pc = 0x3095e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 19));
    // 0x3095e4: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x3095e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x3095e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3095e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3095ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3095ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3095f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3095f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3095f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3095f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3095f8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3095f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3095fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3095fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x309600: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x309600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x309604: 0x3406e0ff  ori         $a2, $zero, 0xE0FF
    ctx->pc = 0x309604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x309608: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x309608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30960c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30960cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x309610: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x309610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x309614: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x309614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x309618: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x309618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30961c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30961cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x309620: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x309620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x309624: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x309624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309628: 0x738fa  dsrl        $a3, $a3, 3
    ctx->pc = 0x309628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 3);
    // 0x30962c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x30962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x309630: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x309630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309634: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x309634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x309638: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x309638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x30963c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309640: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x309640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x309644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309648: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x309648u;
    SET_GPR_U32(ctx, 31, 0x309650u);
    ctx->pc = 0x30964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309648u;
    // 0x30964c: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x309648u, 0x309650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309650u;
label_309650:
    // 0x309650: 0xde640018  ld          $a0, 0x18($s3)
    ctx->pc = 0x309650u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x309654: 0x3406fff8  ori         $a2, $zero, 0xFFF8
    ctx->pc = 0x309654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x309658: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x309658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x30965c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30965cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x309660: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x309660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x309664: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x309664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x309668: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x309668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x30966c: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x30966cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x309670: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x309670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x309674: 0x9665000c  lhu         $a1, 0xC($s3)
    ctx->pc = 0x309674u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x309678: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x309678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x30967c: 0x92630012  lbu         $v1, 0x12($s3)
    ctx->pc = 0x30967cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x309680: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x309680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x309684: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x309684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x309688: 0x92660013  lbu         $a2, 0x13($s3)
    ctx->pc = 0x309688u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x30968c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x30968cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x309690: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x309690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x309694: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x309694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x309698: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x309698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x30969c: 0xa79021  addu        $s2, $a1, $a3
    ctx->pc = 0x30969cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3096a0: 0x24024204  addiu       $v0, $zero, 0x4204
    ctx->pc = 0x3096a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16900));
    // 0x3096a4: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3096A4u;
    {
        const bool branch_taken_0x3096a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3096A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096A4u;
        // 0x3096a8: 0xfe640018  sd          $a0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096a4) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x3096ACu;
    // 0x3096ac: 0x28624205  slti        $v0, $v1, 0x4205
    ctx->pc = 0x3096acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16901) ? 1 : 0);
    // 0x3096b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3096B0u;
    {
        const bool branch_taken_0x3096b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096B0u;
        // 0x3096b4: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096b0) {
            ctx->pc = 0x309734u;
            goto label_309734;
        }
    }
    ctx->pc = 0x3096B8u;
    // 0x3096b8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3096B8u;
    {
        const bool branch_taken_0x3096b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3096BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096B8u;
        // 0x3096bc: 0x28620206  slti        $v0, $v1, 0x206 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)518) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096b8) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x3096C0u;
    // 0x3096c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3096C0u;
    {
        const bool branch_taken_0x3096c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096C0u;
        // 0x3096c4: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096c0) {
            ctx->pc = 0x3096FCu;
            goto label_3096fc;
        }
    }
    ctx->pc = 0x3096C8u;
    // 0x3096c8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3096C8u;
    {
        const bool branch_taken_0x3096c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3096CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096C8u;
        // 0x3096cc: 0x28620106  slti        $v0, $v1, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096c8) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x3096D0u;
    // 0x3096d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3096D0u;
    {
        const bool branch_taken_0x3096d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096D0u;
        // 0x3096d4: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096d0) {
            ctx->pc = 0x3096E8u;
            goto label_3096e8;
        }
    }
    ctx->pc = 0x3096D8u;
    // 0x3096d8: 0x10620078  beq         $v1, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3096D8u;
    {
        const bool branch_taken_0x3096d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3096DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096D8u;
        // 0x3096dc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096d8) {
            ctx->pc = 0x3098BCu;
            goto label_3098bc;
        }
    }
    ctx->pc = 0x3096E0u;
    // 0x3096e0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x3096E0u;
    {
        const bool branch_taken_0x3096e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096E0u;
        // 0x3096e4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096e0) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x3096E8u;
label_3096e8:
    // 0x3096e8: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x3096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x3096ec: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x3096ECu;
    {
        const bool branch_taken_0x3096ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3096F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096ECu;
        // 0x3096f0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096ec) {
            ctx->pc = 0x3098BCu;
            goto label_3098bc;
        }
    }
    ctx->pc = 0x3096F4u;
    // 0x3096f4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x3096F4u;
    {
        const bool branch_taken_0x3096f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3096F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3096F4u;
        // 0x3096f8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3096f4) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x3096FCu;
label_3096fc:
    // 0x3096fc: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x3096fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x309700: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x309700u;
    {
        const bool branch_taken_0x309700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309700u;
        // 0x309704: 0x28620306  slti        $v0, $v1, 0x306 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)774) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309700) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x309708u;
    // 0x309708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309708u;
    {
        const bool branch_taken_0x309708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309708u;
        // 0x30970c: 0x24020304  addiu       $v0, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309708) {
            ctx->pc = 0x309720u;
            goto label_309720;
        }
    }
    ctx->pc = 0x309710u;
    // 0x309710: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x309710u;
    {
        const bool branch_taken_0x309710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309710u;
        // 0x309714: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309710) {
            ctx->pc = 0x3098BCu;
            goto label_3098bc;
        }
    }
    ctx->pc = 0x309718u;
    // 0x309718: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x309718u;
    {
        const bool branch_taken_0x309718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309718u;
        // 0x30971c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309718) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x309720u;
label_309720:
    // 0x309720: 0x24024104  addiu       $v0, $zero, 0x4104
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16644));
    // 0x309724: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x309724u;
    {
        const bool branch_taken_0x309724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309724u;
        // 0x309728: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309724) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x30972Cu;
    // 0x30972c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x30972Cu;
    {
        const bool branch_taken_0x30972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30972Cu;
        // 0x309730: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30972c) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x309734u;
label_309734:
    // 0x309734: 0x34028205  ori         $v0, $zero, 0x8205
    ctx->pc = 0x309734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33285);
    // 0x309738: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x309738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30973c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30973Cu;
    {
        const bool branch_taken_0x30973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30973Cu;
        // 0x309740: 0x34028305  ori         $v0, $zero, 0x8305 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33541);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30973c) {
            ctx->pc = 0x30977Cu;
            goto label_30977c;
        }
    }
    ctx->pc = 0x309744u;
    // 0x309744: 0x34028204  ori         $v0, $zero, 0x8204
    ctx->pc = 0x309744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33284);
    // 0x309748: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x309748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30974c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x30974Cu;
    {
        const bool branch_taken_0x30974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30974Cu;
        // 0x309750: 0x24024304  addiu       $v0, $zero, 0x4304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30974c) {
            ctx->pc = 0x3098BCu;
            goto label_3098bc;
        }
    }
    ctx->pc = 0x309754u;
    // 0x309754: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x309754u;
    {
        const bool branch_taken_0x309754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x309758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309754u;
        // 0x309758: 0x28624304  slti        $v0, $v1, 0x4304 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17156) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309754) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x30975Cu;
    // 0x30975c: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x30975Cu;
    {
        const bool branch_taken_0x30975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30975Cu;
        // 0x309760: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30975c) {
            ctx->pc = 0x3099A4u;
            goto label_3099a4;
        }
    }
    ctx->pc = 0x309764u;
    // 0x309764: 0x34028105  ori         $v0, $zero, 0x8105
    ctx->pc = 0x309764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33029);
    // 0x309768: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x309768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30976c: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x30976Cu;
    {
        const bool branch_taken_0x30976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30976Cu;
        // 0x309770: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30976c) {
            ctx->pc = 0x3099A4u;
            goto label_3099a4;
        }
    }
    ctx->pc = 0x309774u;
    // 0x309774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x309774u;
    {
        const bool branch_taken_0x309774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309774u;
        // 0x309778: 0x34028104  ori         $v0, $zero, 0x8104 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33028);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309774) {
            ctx->pc = 0x30978Cu;
            goto label_30978c;
        }
    }
    ctx->pc = 0x30977Cu;
label_30977c:
    // 0x30977c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x309780: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x309780u;
    {
        const bool branch_taken_0x309780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309780u;
        // 0x309784: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309780) {
            ctx->pc = 0x3099A4u;
            goto label_3099a4;
        }
    }
    ctx->pc = 0x309788u;
    // 0x309788: 0x34028304  ori         $v0, $zero, 0x8304
    ctx->pc = 0x309788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33540);
label_30978c:
    // 0x30978c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x30978cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x309790: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x309790u;
    {
        const bool branch_taken_0x309790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309790u;
        // 0x309794: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309790) {
            ctx->pc = 0x3099A4u;
            goto label_3099a4;
        }
    }
    ctx->pc = 0x309798u;
    // 0x309798: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x309798u;
    {
        const bool branch_taken_0x309798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309798u;
        // 0x30979c: 0x9662000e  lhu         $v0, 0xE($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309798) {
            ctx->pc = 0x3098C0u;
            goto label_3098c0;
        }
    }
    ctx->pc = 0x3097A0u;
label_3097a0:
    // 0x3097a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3097a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3097a4: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3097A4u;
    {
        const bool branch_taken_0x3097a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3097A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097A4u;
        // 0x3097a8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097a4) {
            ctx->pc = 0x3097DCu;
            goto label_3097dc;
        }
    }
    ctx->pc = 0x3097ACu;
    // 0x3097ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3097ACu;
    {
        const bool branch_taken_0x3097ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097ACu;
        // 0x3097b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097ac) {
            ctx->pc = 0x3097C4u;
            goto label_3097c4;
        }
    }
    ctx->pc = 0x3097B4u;
    // 0x3097b4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3097B4u;
    {
        const bool branch_taken_0x3097b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097B4u;
        // 0x3097b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097b4) {
            ctx->pc = 0x3097D4u;
            goto label_3097d4;
        }
    }
    ctx->pc = 0x3097BCu;
    // 0x3097bc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3097BCu;
    {
        const bool branch_taken_0x3097bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097BCu;
        // 0x3097c0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097bc) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x3097C4u;
label_3097c4:
    // 0x3097c4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3097C4u;
    {
        const bool branch_taken_0x3097c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3097C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097C4u;
        // 0x3097c8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097c4) {
            ctx->pc = 0x3097DCu;
            goto label_3097dc;
        }
    }
    ctx->pc = 0x3097CCu;
    // 0x3097cc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3097CCu;
    {
        const bool branch_taken_0x3097cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097CCu;
        // 0x3097d0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097cc) {
            ctx->pc = 0x3099A8u;
            goto label_3099a8;
        }
    }
    ctx->pc = 0x3097D4u;
label_3097d4:
    // 0x3097d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3097D4u;
    {
        const bool branch_taken_0x3097d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097D4u;
        // 0x3097d8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097d4) {
            ctx->pc = 0x3097E0u;
            goto label_3097e0;
        }
    }
    ctx->pc = 0x3097DCu;
label_3097dc:
    // 0x3097dc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3097dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3097e0:
    // 0x3097e0: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x3097e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3097e4: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3097E4u;
    {
        const bool branch_taken_0x3097e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097E4u;
        // 0x3097e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097e4) {
            ctx->pc = 0x3099A0u;
            goto label_3099a0;
        }
    }
    ctx->pc = 0x3097ECu;
    // 0x3097ec: 0x10b400  sll         $s6, $s0, 16
    ctx->pc = 0x3097ecu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3097f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3097f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3097f4: 0x3c1e0074  lui         $fp, 0x74
    ctx->pc = 0x3097f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)116 << 16));
    // 0x3097f8: 0x3c172000  lui         $s7, 0x2000
    ctx->pc = 0x3097f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
    // 0x3097fc: 0x0  nop
    ctx->pc = 0x3097fcu;
    // NOP
label_309800:
    // 0x309800: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x309800u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x309804: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x309804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x309808: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309808u;
    {
        const bool branch_taken_0x309808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309808u;
        // 0x30980c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309808) {
            ctx->pc = 0x309824u;
            goto label_309824;
        }
    }
    ctx->pc = 0x309810u;
    // 0x309810: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x309810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x309814: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x309814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309818: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309818u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30981c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30981Cu;
    {
        const bool branch_taken_0x30981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30981Cu;
        // 0x309820: 0x28103  sra         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30981c) {
            ctx->pc = 0x309828u;
            goto label_309828;
        }
    }
    ctx->pc = 0x309824u;
label_309824:
    // 0x309824: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x309824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_309828:
    // 0x309828: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x309828u;
    SET_GPR_U32(ctx, 31, 0x309830u);
    ctx->pc = 0x30982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309828u;
    // 0x30982c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x309828u, 0x309830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309830u;
label_309830:
    // 0x309830: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x309830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x309834: 0x105c00  sll         $t3, $s0, 16
    ctx->pc = 0x309834u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x309838: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x309838u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x30983c: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x309840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x309840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309844: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309848: 0x163c03  sra         $a3, $s6, 16
    ctx->pc = 0x309848u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 22), 16));
    // 0x30984c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30984cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309850: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x309850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309854: 0xc0e550c  jal         func_395430
    ctx->pc = 0x309854u;
    SET_GPR_U32(ctx, 31, 0x30985Cu);
    ctx->pc = 0x309858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309854u;
    // 0x309858: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395430u, 0x309854u, 0x30985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30985Cu;
label_30985c:
    // 0x30985c: 0x8fc37a24  lw          $v1, 0x7A24($fp)
    ctx->pc = 0x30985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 31268)));
    // 0x309860: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x309860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
    // 0x309864: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x309864u;
    {
        const bool branch_taken_0x309864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x309864) {
            ctx->pc = 0x30987Cu;
            goto label_30987c;
        }
    }
    ctx->pc = 0x30986Cu;
    // 0x30986c: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x30986Cu;
    SET_GPR_U32(ctx, 31, 0x309874u);
    ctx->pc = 0x309870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30986Cu;
    // 0x309870: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x30986Cu, 0x309874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309874u;
label_309874:
    // 0x309874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309874u;
    {
        const bool branch_taken_0x309874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309874u;
        // 0x309878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309874) {
            ctx->pc = 0x309888u;
            goto label_309888;
        }
    }
    ctx->pc = 0x30987Cu;
label_30987c:
    // 0x30987c: 0xc0ebfd4  jal         func_3AFF50
    ctx->pc = 0x30987Cu;
    SET_GPR_U32(ctx, 31, 0x309884u);
    ctx->pc = 0x309880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30987Cu;
    // 0x309880: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF50u, 0x30987Cu, 0x309884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309884u;
label_309884:
    // 0x309884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x309884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_309888:
    // 0x309888: 0xc0e55d6  jal         func_395758
    ctx->pc = 0x309888u;
    SET_GPR_U32(ctx, 31, 0x309890u);
    ctx->pc = 0x30988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309888u;
    // 0x30988c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395758u, 0x309888u, 0x309890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309890u;
label_309890:
    // 0x309890: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x309890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x309894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x309894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309898: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x309898u;
    SET_GPR_U32(ctx, 31, 0x3098A0u);
    ctx->pc = 0x30989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309898u;
    // 0x30989c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x309898u, 0x3098A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098A0u;
label_3098a0:
    // 0x3098a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3098a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3098a4: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x3098a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3098a8: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x3098a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3098ac: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3098ACu;
    {
        const bool branch_taken_0x3098ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3098B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098ACu;
        // 0x3098b0: 0x2559021  addu        $s2, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098ac) {
            ctx->pc = 0x309800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309800;
        }
    }
    ctx->pc = 0x3098B4u;
    // 0x3098b4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3098B4u;
    {
        const bool branch_taken_0x3098b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098B4u;
        // 0x3098b8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098b4) {
            ctx->pc = 0x3099A4u;
            goto label_3099a4;
        }
    }
    ctx->pc = 0x3098BCu;
label_3098bc:
    // 0x3098bc: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x3098bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_3098c0:
    // 0x3098c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3098c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3098c4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x3098c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x3098c8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3098C8u;
    {
        const bool branch_taken_0x3098c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3098CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098C8u;
        // 0x3098cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3098c8) {
            ctx->pc = 0x309984u;
            goto label_309984;
        }
    }
    ctx->pc = 0x3098D0u;
    // 0x3098d0: 0x10ac00  sll         $s5, $s0, 16
    ctx->pc = 0x3098d0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3098d4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3098d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3098d8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3098d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3098dc: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3098dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3098e0:
    // 0x3098e0: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x3098e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3098e4: 0x2624000f  addiu       $a0, $s1, 0xF
    ctx->pc = 0x3098e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x3098e8: 0x222200b  movn        $a0, $s1, $v0
    ctx->pc = 0x3098e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x3098ec: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x3098ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x3098f0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3098f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x3098f4: 0xc0c28a6  jal         func_30A298
    ctx->pc = 0x3098F4u;
    SET_GPR_U32(ctx, 31, 0x3098FCu);
    ctx->pc = 0x3098F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3098F4u;
    // 0x3098f8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A298u, 0x3098F4u, 0x3098FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3098FCu;
label_3098fc:
    // 0x3098fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3098fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x309900: 0x32280001  andi        $t0, $s1, 0x1
    ctx->pc = 0x309900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x309904: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x309904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309908: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x309908u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x30990c: 0x3209000e  andi        $t1, $s0, 0xE
    ctx->pc = 0x30990cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14);
    // 0x309910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x309910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309914: 0x153c03  sra         $a3, $s5, 16
    ctx->pc = 0x309914u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 16));
    // 0x309918: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x309918u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30991c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x30991cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309920: 0xc0e550c  jal         func_395430
    ctx->pc = 0x309920u;
    SET_GPR_U32(ctx, 31, 0x309928u);
    ctx->pc = 0x309924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309920u;
    // 0x309924: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395430u, 0x309920u, 0x309928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309928u;
label_309928:
    // 0x309928: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x309928u;
    SET_GPR_U32(ctx, 31, 0x309930u);
    ctx->pc = 0x30992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309928u;
    // 0x30992c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x309928u, 0x309930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309930u;
label_309930:
    // 0x309930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x309930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309934: 0xc0e55d6  jal         func_395758
    ctx->pc = 0x309934u;
    SET_GPR_U32(ctx, 31, 0x30993Cu);
    ctx->pc = 0x309938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309934u;
    // 0x309938: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395758u, 0x309934u, 0x30993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30993Cu;
label_30993c:
    // 0x30993c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309940: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x309940u;
    SET_GPR_U32(ctx, 31, 0x309948u);
    ctx->pc = 0x309944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309940u;
    // 0x309944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x309940u, 0x309948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309948u;
label_309948:
    // 0x309948: 0x92630012  lbu         $v1, 0x12($s3)
    ctx->pc = 0x309948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x30994c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x30994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x309950: 0x14770003  bne         $v1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x309950u;
    {
        const bool branch_taken_0x309950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x309950) {
            ctx->pc = 0x309960u;
            goto label_309960;
        }
    }
    ctx->pc = 0x309958u;
    // 0x309958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x309958u;
    {
        const bool branch_taken_0x309958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309958u;
        // 0x30995c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309958) {
            ctx->pc = 0x30996Cu;
            goto label_30996c;
        }
    }
    ctx->pc = 0x309960u;
label_309960:
    // 0x309960: 0x54760002  bnel        $v1, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x309960u;
    {
        const bool branch_taken_0x309960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x309960) {
            ctx->pc = 0x309964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309960u;
            // 0x309964: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30996Cu;
            goto label_30996c;
        }
    }
    ctx->pc = 0x309968u;
    // 0x309968: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x309968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_30996c:
    // 0x30996c: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x30996cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x309970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x309970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x309974: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x309974u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x309978: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x309978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30997c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x30997Cu;
    {
        const bool branch_taken_0x30997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30997Cu;
        // 0x309980: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30997c) {
            ctx->pc = 0x3098E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3098e0;
        }
    }
    ctx->pc = 0x309984u;
label_309984:
    // 0x309984: 0x24a400ff  addiu       $a0, $a1, 0xFF
    ctx->pc = 0x309984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x309988: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30998c: 0x24a201fe  addiu       $v0, $a1, 0x1FE
    ctx->pc = 0x30998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 510));
    // 0x309990: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x309990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309994: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x309994u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x309998: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x309998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x30999c: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x30999cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3099a0:
    // 0x3099a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3099a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3099a4:
    // 0x3099a4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3099a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3099a8:
    // 0x3099a8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3099a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3099ac: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3099acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3099b0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3099b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3099b4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3099b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3099b8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3099b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3099bc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3099bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3099c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3099c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3099c4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x3099c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3099c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3099c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3099cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3099CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3099D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3099CCu;
        // 0x3099d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3099CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3099D4u;
    // 0x3099d4: 0x0  nop
    ctx->pc = 0x3099d4u;
    // NOP
    ctx->pc = 0x3099d8u;
}
