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

// Function: fde_split
// Address: 0x322748 - 0x3228c0
void fde_split_0x322748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fde_split_0x322748");
#endif

    switch (ctx->pc) {
        case 0x322798u: goto label_322798;
        case 0x3227d8u: goto label_3227d8;
        case 0x322878u: goto label_322878;
        default: break;
    }

    ctx->pc = 0x322748u;

    // 0x322748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32274c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x32274cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322750: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x322750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x322754: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x322754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x322758: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x322758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x32275c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x32275cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322760: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x322760u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322764: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x322764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x322768: 0x8df80004  lw          $t8, 0x4($t7)
    ctx->pc = 0x322768u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x32276c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32276cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322770: 0x181140  sll         $v0, $t8, 5
    ctx->pc = 0x322770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 5));
    // 0x322774: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x322774u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x322778: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x322778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x32277c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x32277cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x322780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x322780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x322784: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x322784u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x322788: 0x13000036  beqz        $t8, . + 4 + (0x36 << 2)
    ctx->pc = 0x322788u;
    {
        const bool branch_taken_0x322788 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x32278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322788u;
        // 0x32278c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322788) {
            ctx->pc = 0x322864u;
            goto label_322864;
        }
    }
    ctx->pc = 0x322790u;
    // 0x322790: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x322790u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x322794: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x322794u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
label_322798:
    // 0x322798: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x322798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32279c: 0x110d0029  beq         $t0, $t5, . + 4 + (0x29 << 2)
    ctx->pc = 0x32279Cu;
    {
        const bool branch_taken_0x32279c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x3227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32279Cu;
        // 0x3227a0: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32279c) {
            ctx->pc = 0x322844u;
            goto label_322844;
        }
    }
    ctx->pc = 0x3227A4u;
    // 0x3227a4: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x3227a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3227a8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x3227a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3227ac: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x3227acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x3227b0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x3227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3227b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3227b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3227b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3227b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3227bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3227bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3227c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3227c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3227c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3227c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3227c8: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3227C8u;
    {
        const bool branch_taken_0x3227c8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3227CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227C8u;
        // 0x3227cc: 0x160c82d  daddu       $t9, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3227c8) {
            ctx->pc = 0x322844u;
            goto label_322844;
        }
    }
    ctx->pc = 0x3227D0u;
    // 0x3227d0: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x3227d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3227d4: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x3227d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3227d8:
    // 0x3227d8: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x3227d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3227dc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x3227dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3227e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3227e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3227e4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x3227e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3227e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3227e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3227ec: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3227ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3227f0: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3227f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3227f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3227f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3227f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3227f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3227fc: 0xad840004  sw          $a0, 0x4($t4)
    ctx->pc = 0x3227fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 4));
    // 0x322800: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x322800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x322804: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x322804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x322808: 0x110d000f  beq         $t0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x322808u;
    {
        const bool branch_taken_0x322808 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        ctx->pc = 0x32280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322808u;
        // 0x32280c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322808) {
            ctx->pc = 0x322848u;
            goto label_322848;
        }
    }
    ctx->pc = 0x322810u;
    // 0x322810: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x322810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x322814: 0x3271821  addu        $v1, $t9, $a3
    ctx->pc = 0x322814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
    // 0x322818: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x322818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32281c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32281cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322820: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x322820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x322824: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x322824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322828: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x322828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32282c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x322830: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x322830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322834: 0x460ffe8  bltz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x322834u;
    {
        const bool branch_taken_0x322834 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x322838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322834u;
        // 0x322838: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322834) {
            ctx->pc = 0x3227D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3227d8;
        }
    }
    ctx->pc = 0x32283Cu;
    // 0x32283c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32283Cu;
    {
        const bool branch_taken_0x32283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32283Cu;
        // 0x322840: 0x20b1821  addu        $v1, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32283c) {
            ctx->pc = 0x322850u;
            goto label_322850;
        }
    }
    ctx->pc = 0x322844u;
label_322844:
    // 0x322844: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x322844u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_322848:
    // 0x322848: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x322848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32284c: 0x20b1821  addu        $v1, $s0, $t3
    ctx->pc = 0x32284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
label_322850:
    // 0x322850: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x322850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322854: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x322854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x322858: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x322858u;
    {
        const bool branch_taken_0x322858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322858u;
        // 0x32285c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322858) {
            ctx->pc = 0x322798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322798;
        }
    }
    ctx->pc = 0x322860u;
    // 0x322860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x322860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322864:
    // 0x322864: 0x1300000f  beqz        $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x322864u;
    {
        const bool branch_taken_0x322864 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x322868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322864u;
        // 0x322868: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322864) {
            ctx->pc = 0x3228A4u;
            goto label_3228a4;
        }
    }
    ctx->pc = 0x32286Cu;
    // 0x32286c: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x32286cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x322870: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x322870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x322874: 0x0  nop
    ctx->pc = 0x322874u;
    // NOP
label_322878:
    // 0x322878: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x322878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32287c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322880: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x322880u;
    {
        const bool branch_taken_0x322880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322880u;
        // 0x322884: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322880) {
            ctx->pc = 0x322894u;
            goto label_322894;
        }
    }
    ctx->pc = 0x322888u;
    // 0x322888: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x322888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x32288c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32288cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x322890: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x322890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_322894:
    // 0x322894: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x322894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x322898: 0x138102b  sltu        $v0, $t1, $t8
    ctx->pc = 0x322898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x32289c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32289Cu;
    {
        const bool branch_taken_0x32289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3228A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32289Cu;
        // 0x3228a0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32289c) {
            ctx->pc = 0x322878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322878;
        }
    }
    ctx->pc = 0x3228A4u;
label_3228a4:
    // 0x3228a4: 0xade80004  sw          $t0, 0x4($t7)
    ctx->pc = 0x3228a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 8));
    // 0x3228a8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3228a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3228ac: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x3228acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3228b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3228b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3228b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3228B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3228B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3228B4u;
        // 0x3228b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3228B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3228BCu;
    // 0x3228bc: 0x0  nop
    ctx->pc = 0x3228bcu;
    // NOP
    ctx->pc = 0x3228c0u;
}
