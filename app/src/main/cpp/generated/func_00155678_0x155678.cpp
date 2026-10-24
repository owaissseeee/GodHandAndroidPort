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

// Function: func_00155678
// Address: 0x155678 - 0x155800
void func_00155678_0x155678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155678_0x155678");
#endif

    switch (ctx->pc) {
        case 0x1557b8u: goto label_1557b8;
        default: break;
    }

    ctx->pc = 0x155678u;

    // 0x155678: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x155678u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15567c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x15567cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155680: 0xd3080  sll         $a2, $t5, 2
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x155684: 0xe1180  sll         $v0, $t6, 6
    ctx->pc = 0x155684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x155688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15568c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x15568cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155690: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x155694: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x155694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x155698: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15569c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x15569cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1556a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1556a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1556a4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1556a8: 0xac4b0300  sw          $t3, 0x300($v0)
    ctx->pc = 0x1556a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 768), GPR_U32(ctx, 11));
    // 0x1556ac: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1556acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1556b0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1556b4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1556b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1556b8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1556bc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1556bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1556c0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1556c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1556c4: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1556c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1556c8: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x1556c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x1556cc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1556ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1556d0: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x1556d0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x1556d4: 0xad620008  sw          $v0, 0x8($t3)
    ctx->pc = 0x1556d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 2));
    // 0x1556d8: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1556d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1556dc: 0xad63000c  sw          $v1, 0xC($t3)
    ctx->pc = 0x1556dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 3));
    // 0x1556e0: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1556e4: 0xfd670010  sd          $a3, 0x10($t3)
    ctx->pc = 0x1556e4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 7));
    // 0x1556e8: 0x24a57bb8  addiu       $a1, $a1, 0x7BB8
    ctx->pc = 0x1556e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31672));
    // 0x1556ec: 0xad680018  sw          $t0, 0x18($t3)
    ctx->pc = 0x1556ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 8));
    // 0x1556f0: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1556f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1556f4: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x1556f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x1556f8: 0x8d840388  lw          $a0, 0x388($t4)
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 904)));
    // 0x1556fc: 0x91830384  lbu         $v1, 0x384($t4)
    ctx->pc = 0x1556fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 900)));
    // 0x155700: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x155700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x155704: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x155704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x155708: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15570c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x155710: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x155710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x155714: 0x90440016  lbu         $a0, 0x16($v0)
    ctx->pc = 0x155714u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x155718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15571c: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x15571cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155720: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x155724: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x155724u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155728: 0xfd690028  sd          $t1, 0x28($t3)
    ctx->pc = 0x155728u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 40), GPR_U64(ctx, 9));
    // 0x15572c: 0xfd640020  sd          $a0, 0x20($t3)
    ctx->pc = 0x15572cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 4));
    // 0x155730: 0x8d820380  lw          $v0, 0x380($t4)
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 896)));
    // 0x155734: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x155734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x155738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x155738u;
    {
        const bool branch_taken_0x155738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155738u;
        // 0x15573c: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155738) {
            ctx->pc = 0x155754u;
            goto label_155754;
        }
    }
    ctx->pc = 0x155740u;
    // 0x155740: 0x3402c400  ori         $v0, $zero, 0xC400
    ctx->pc = 0x155740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50176);
    // 0x155744: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x155744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x155748: 0x34428a00  ori         $v0, $v0, 0x8A00
    ctx->pc = 0x155748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35328);
    // 0x15574c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x15574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x155750: 0xfd620020  sd          $v0, 0x20($t3)
    ctx->pc = 0x155750u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 2));
label_155754:
    // 0x155754: 0x8d820380  lw          $v0, 0x380($t4)
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 896)));
    // 0x155758: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x155758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15575c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15575Cu;
    {
        const bool branch_taken_0x15575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15575Cu;
        // 0x155760: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15575c) {
            ctx->pc = 0x155784u;
            goto label_155784;
        }
    }
    ctx->pc = 0x155764u;
    // 0x155764: 0x3402800e  ori         $v0, $zero, 0x800E
    ctx->pc = 0x155764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x155768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x155768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15576c: 0x3442e019  ori         $v0, $v0, 0xE019
    ctx->pc = 0x15576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57369);
    // 0x155770: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x155770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x155774: 0x34429508  ori         $v0, $v0, 0x9508
    ctx->pc = 0x155774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38152);
    // 0x155778: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x155778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x15577c: 0x34423b20  ori         $v0, $v0, 0x3B20
    ctx->pc = 0x15577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15136);
    // 0x155780: 0xfd620020  sd          $v0, 0x20($t3)
    ctx->pc = 0x155780u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 32), GPR_U64(ctx, 2));
label_155784:
    // 0x155784: 0x256b0040  addiu       $t3, $t3, 0x40
    ctx->pc = 0x155784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x155788: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x155788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x15578c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x15578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x155790: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x155790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x155794: 0x1701024  and         $v0, $t3, $s0
    ctx->pc = 0x155794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x155798: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x155798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15579c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1557a0: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1557a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1557a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1557a8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1557a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557ac: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1557acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1557b0: 0xc055600  jal         func_155800
    ctx->pc = 0x1557B0u;
    SET_GPR_U32(ctx, 31, 0x1557B8u);
    ctx->pc = 0x1557B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557B0u;
    // 0x1557b4: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155800u, 0x1557B0u, 0x1557B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557B8u;
label_1557b8:
    // 0x1557b8: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x1557b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1557bc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1557bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557c0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1557c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1557c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1557c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1557c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1557cc: 0x25648000  addiu       $a0, $t3, -0x8000
    ctx->pc = 0x1557ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294934528));
    // 0x1557d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1557d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1557d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1557d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1557d8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1557d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1557dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1557dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1557e0: 0x7c827ff0  sq          $v0, 0x7FF0($a0)
    ctx->pc = 0x1557e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32752), GPR_VEC(ctx, 2));
    // 0x1557e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1557e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1557e8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1557e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557ec: 0xfc837ff0  sd          $v1, 0x7FF0($a0)
    ctx->pc = 0x1557ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32752), GPR_U64(ctx, 3));
    // 0x1557f0: 0xac807ffc  sw          $zero, 0x7FFC($a0)
    ctx->pc = 0x1557f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32764), GPR_U32(ctx, 0));
    // 0x1557f4: 0xac807ff8  sw          $zero, 0x7FF8($a0)
    ctx->pc = 0x1557f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32760), GPR_U32(ctx, 0));
    // 0x1557f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1557F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1557FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557F8u;
        // 0x1557fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155800u;
}
