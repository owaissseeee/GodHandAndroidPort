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

// Function: func_00151168
// Address: 0x151168 - 0x151368
void func_00151168_0x151168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151168_0x151168");
#endif

    switch (ctx->pc) {
        case 0x151328u: goto label_151328;
        case 0x151354u: goto label_151354;
        default: break;
    }

    ctx->pc = 0x151168u;

    // 0x151168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15116c: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x15116cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151174: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x151174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151178: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x151178u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15117c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x15117cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151180: 0xe0c82d  daddu       $t9, $a3, $zero
    ctx->pc = 0x151180u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151184: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x151184u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151188: 0x5600006  bltz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x151188u;
    {
        const bool branch_taken_0x151188 = (GPR_S64(ctx, 11) < 0);
        ctx->pc = 0x15118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151188u;
        // 0x15118c: 0x8fb80010  lw          $t8, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151188) {
            ctx->pc = 0x1511A4u;
            goto label_1511a4;
        }
    }
    ctx->pc = 0x151190u;
    // 0x151190: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x151190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x151194: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x151198: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x151198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15119c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x15119Cu;
    {
        const bool branch_taken_0x15119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1511A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15119Cu;
        // 0x1511a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15119c) {
            ctx->pc = 0x151358u;
            goto label_151358;
        }
    }
    ctx->pc = 0x1511A4u;
label_1511a4:
    // 0x1511a4: 0x8d04003c  lw          $a0, 0x3C($t0)
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1511a8: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1511ac: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1511ACu;
    {
        const bool branch_taken_0x1511ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1511B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511ACu;
        // 0x1511b0: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511ac) {
            ctx->pc = 0x1511BCu;
            goto label_1511bc;
        }
    }
    ctx->pc = 0x1511B4u;
    // 0x1511b4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1511B4u;
    {
        const bool branch_taken_0x1511b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511B4u;
        // 0x1511b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511b4) {
            ctx->pc = 0x151358u;
            goto label_151358;
        }
    }
    ctx->pc = 0x1511BCu;
label_1511bc:
    // 0x1511bc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1511bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1511c0: 0x8c6576b0  lw          $a1, 0x76B0($v1)
    ctx->pc = 0x1511c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x1511c4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1511c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1511c8: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1511c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1511cc: 0xf1fc2  srl         $v1, $t7, 31
    ctx->pc = 0x1511ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x1511d0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1511d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1511d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1511d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1511d8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1511d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1511dc: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x1511dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1511e0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1511e4: 0xad04003c  sw          $a0, 0x3C($t0)
    ctx->pc = 0x1511e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 4));
    // 0x1511e8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1511e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1511ec: 0x37843  sra         $t7, $v1, 1
    ctx->pc = 0x1511ecu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1511f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1511f4: 0x15840007  bne         $t4, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1511F4u;
    {
        const bool branch_taken_0x1511f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        ctx->pc = 0x1511F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511F4u;
        // 0x1511f8: 0x457021  addu        $t6, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511f4) {
            ctx->pc = 0x151214u;
            goto label_151214;
        }
    }
    ctx->pc = 0x1511FCu;
    // 0x1511fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1511fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151200: 0x25230003  addiu       $v1, $t1, 0x3
    ctx->pc = 0x151200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x151204: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x151204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x151208: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x151208u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x15120c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15120Cu;
    {
        const bool branch_taken_0x15120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15120Cu;
        // 0x151210: 0x34883  sra         $t1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15120c) {
            ctx->pc = 0x15122Cu;
            goto label_15122c;
        }
    }
    ctx->pc = 0x151214u;
label_151214:
    // 0x151214: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x151214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x151218: 0x15820005  bne         $t4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151218u;
    {
        const bool branch_taken_0x151218 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x15121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151218u;
        // 0x15121c: 0x1e93818  mult        $a3, $t7, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151218) {
            ctx->pc = 0x151230u;
            goto label_151230;
        }
    }
    ctx->pc = 0x151220u;
    // 0x151220: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x151224: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x151224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x151228: 0x24843  sra         $t1, $v0, 1
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
label_15122c:
    // 0x15122c: 0x1e93818  mult        $a3, $t7, $t1
    ctx->pc = 0x15122cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_151230:
    // 0x151230: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151234: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x151234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x151238: 0x25e4003f  addiu       $a0, $t7, 0x3F
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 63));
    // 0x15123c: 0x1e2200b  movn        $a0, $t7, $v0
    ctx->pc = 0x15123cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
    // 0x151240: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x151240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x151244: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x151244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x151248: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x151248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15124c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
    // 0x151250: 0x25c20070  addiu       $v0, $t6, 0x70
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x151254: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x151254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x151258: 0x34e68000  ori         $a2, $a3, 0x8000
    ctx->pc = 0x151258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x15125c: 0x1a35824  and         $t3, $t5, $v1
    ctx->pc = 0x15125cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x151260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x151264: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x151268: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x151268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15126c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x15126cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151270: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x151270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151274: 0x19503c  dsll32      $t2, $t9, 0
    ctx->pc = 0x151274u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) << (32 + 0));
    // 0x151278: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x151278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x15127c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x15127cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x151280: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x151280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x151284: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x151288: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x151288u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x15128c: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x151290: 0x35080006  ori         $t0, $t0, 0x6
    ctx->pc = 0x151290u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    // 0x151294: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x151294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x151298: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x151298u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15129c: 0xc633c  dsll32      $t4, $t4, 12
    ctx->pc = 0x15129cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 12));
    // 0x1512a0: 0x3c0d5000  lui         $t5, 0x5000
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)20480 << 16));
    // 0x1512a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1512a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1512a8: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1512a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1512ac: 0x1e94825  or          $t1, $t7, $t1
    ctx->pc = 0x1512acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 9));
    // 0x1512b0: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x1512b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x1512b4: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x1512b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x1512b8: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x1512b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x1512bc: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x1512bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1512c0: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x1512c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x1512c4: 0xadc3000c  sw          $v1, 0xC($t6)
    ctx->pc = 0x1512c4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 3));
    // 0x1512c8: 0xfdca0020  sd          $t2, 0x20($t6)
    ctx->pc = 0x1512c8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 10));
    // 0x1512cc: 0xfdc90040  sd          $t1, 0x40($t6)
    ctx->pc = 0x1512ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 9));
    // 0x1512d0: 0xfdc60060  sd          $a2, 0x60($t6)
    ctx->pc = 0x1512d0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 96), GPR_U64(ctx, 6));
    // 0x1512d4: 0xfdc50070  sd          $a1, 0x70($t6)
    ctx->pc = 0x1512d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 112), GPR_U64(ctx, 5));
    // 0x1512d8: 0x13000004  beqz        $t8, . + 4 + (0x4 << 2)
    ctx->pc = 0x1512D8u;
    {
        const bool branch_taken_0x1512d8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512D8u;
        // 0x1512dc: 0xadc7007c  sw          $a3, 0x7C($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 124), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512d8) {
            ctx->pc = 0x1512ECu;
            goto label_1512ec;
        }
    }
    ctx->pc = 0x1512E0u;
    // 0x1512e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1512e4: 0x17020007  bne         $t8, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1512E4u;
    {
        const bool branch_taken_0x1512e4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x1512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E4u;
        // 0x1512e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e4) {
            ctx->pc = 0x151304u;
            goto label_151304;
        }
    }
    ctx->pc = 0x1512ECu;
label_1512ec:
    // 0x1512ec: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x1512ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512f0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x1512f4: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x1512f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x1512f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1512f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1512FCu;
    {
        const bool branch_taken_0x1512fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512FCu;
        // 0x151300: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512fc) {
            ctx->pc = 0x151320u;
            goto label_151320;
        }
    }
    ctx->pc = 0x151304u;
label_151304:
    // 0x151304: 0x1702000a  bne         $t8, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x151304u;
    {
        const bool branch_taken_0x151304 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x151308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151304u;
        // 0x151308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151304) {
            ctx->pc = 0x151330u;
            goto label_151330;
        }
    }
    ctx->pc = 0x15130Cu;
    // 0x15130c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x15130cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151310: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x151310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x151314: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x151318: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15131c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_151320:
    // 0x151320: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x151320u;
    SET_GPR_U32(ctx, 31, 0x151328u);
    ctx->pc = 0x151324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151320u;
    // 0x151324: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x151320u, 0x151328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151328u;
label_151328:
    // 0x151328: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151328u;
    {
        const bool branch_taken_0x151328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151328u;
        // 0x15132c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151328) {
            ctx->pc = 0x151358u;
            goto label_151358;
        }
    }
    ctx->pc = 0x151330u;
label_151330:
    // 0x151330: 0x17020009  bne         $t8, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151330u;
    {
        const bool branch_taken_0x151330 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x151334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151330u;
        // 0x151334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151330) {
            ctx->pc = 0x151358u;
            goto label_151358;
        }
    }
    ctx->pc = 0x151338u;
    // 0x151338: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x151338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15133c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x151340: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x151340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x151344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151348: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15134c: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15134Cu;
    SET_GPR_U32(ctx, 31, 0x151354u);
    ctx->pc = 0x151350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15134Cu;
    // 0x151350: 0x24e80080  addiu       $t0, $a3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15134Cu, 0x151354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151354u;
label_151354:
    // 0x151354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151358:
    // 0x151358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15135c: 0x3e00008  jr          $ra
    ctx->pc = 0x15135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15135Cu;
        // 0x151360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151364u;
    // 0x151364: 0x0  nop
    ctx->pc = 0x151364u;
    // NOP
    ctx->pc = 0x151368u;
}
