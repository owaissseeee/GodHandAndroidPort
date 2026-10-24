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

// Function: func_0015D6E8
// Address: 0x15d6e8 - 0x15db30
void func_0015D6E8_0x15d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015D6E8_0x15d6e8");
#endif

    switch (ctx->pc) {
        case 0x15d738u: goto label_15d738;
        case 0x15d768u: goto label_15d768;
        case 0x15d828u: goto label_15d828;
        case 0x15d834u: goto label_15d834;
        case 0x15daf8u: goto label_15daf8;
        default: break;
    }

    ctx->pc = 0x15d6e8u;

    // 0x15d6e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15d6ec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x15d6f0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x15d6f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15d6f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6f8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x15d6fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d700: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x15d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x15d704: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x15d704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d708: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x15d70c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15d70cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d710: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x15d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x15d714: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15d714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d718: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x15d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x15d71c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x15d71cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d720: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x15d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x15d724: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x15d728: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x15d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x15d72c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15d72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15d730: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15D730u;
    SET_GPR_U32(ctx, 31, 0x15D738u);
    ctx->pc = 0x15D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D730u;
    // 0x15d734: 0xafab0028  sw          $t3, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15D730u, 0x15D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D738u;
label_15d738:
    // 0x15d738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d73c: 0x122000ef  beqz        $s1, . + 4 + (0xEF << 2)
    ctx->pc = 0x15D73Cu;
    {
        const bool branch_taken_0x15d73c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D73Cu;
        // 0x15d740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d73c) {
            ctx->pc = 0x15DAFCu;
            goto label_15dafc;
        }
    }
    ctx->pc = 0x15D744u;
    // 0x15d744: 0x101602  srl         $v0, $s0, 24
    ctx->pc = 0x15d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x15d748: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15d748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d74c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15d74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d750: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15d750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d758: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15d75c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d760: 0xc057828  jal         func_15E0A0
    ctx->pc = 0x15D760u;
    SET_GPR_U32(ctx, 31, 0x15D768u);
    ctx->pc = 0x15D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D760u;
    // 0x15d764: 0x26d30010  addiu       $s3, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E0A0u, 0x15D760u, 0x15D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D768u;
label_15d768:
    // 0x15d768: 0x321e00ff  andi        $fp, $s0, 0xFF
    ctx->pc = 0x15d768u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x15d76c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15d76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d770: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15d770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x15d774: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x15d774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x15d778: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15d77c: 0xfe250170  sd          $a1, 0x170($s1)
    ctx->pc = 0x15d77cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 5));
    // 0x15d780: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15d784: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x15d788: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15d78c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x15d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x15d790: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d794: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d798: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15d79c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15d79cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15d7a0: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15d7a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15d7a4: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15d7a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15d7a8: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15d7ac: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15d7acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15d7b0: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15d7b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15d7b4: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15d7b8: 0xfe230160  sd          $v1, 0x160($s1)
    ctx->pc = 0x15d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 352), GPR_U64(ctx, 3));
    // 0x15d7bc: 0x26250240  addiu       $a1, $s1, 0x240
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x15d7c0: 0xae240168  sw          $a0, 0x168($s1)
    ctx->pc = 0x15d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 4));
    // 0x15d7c4: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x15d7c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15d7c8: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x15d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
    // 0x15d7cc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15d7d0: 0xfe260178  sd          $a2, 0x178($s1)
    ctx->pc = 0x15d7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 6));
    // 0x15d7d4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15d7d8: 0xfe270180  sd          $a3, 0x180($s1)
    ctx->pc = 0x15d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 7));
    // 0x15d7dc: 0x10b202  srl         $s6, $s0, 8
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x15d7e0: 0xfe280188  sd          $t0, 0x188($s1)
    ctx->pc = 0x15d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 8));
    // 0x15d7e4: 0x10ac02  srl         $s5, $s0, 16
    ctx->pc = 0x15d7e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x15d7e8: 0xfe290190  sd          $t1, 0x190($s1)
    ctx->pc = 0x15d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 400), GPR_U64(ctx, 9));
    // 0x15d7ec: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d7f0: 0xfe2a0198  sd          $t2, 0x198($s1)
    ctx->pc = 0x15d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 10));
    // 0x15d7f4: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x15d7f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15d7f8: 0xfe2b01a0  sd          $t3, 0x1A0($s1)
    ctx->pc = 0x15d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 11));
    // 0x15d7fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15d7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15d800: 0xfe2c01a8  sd          $t4, 0x1A8($s1)
    ctx->pc = 0x15d800u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 12));
    // 0x15d804: 0xfe2d01b8  sd          $t5, 0x1B8($s1)
    ctx->pc = 0x15d804u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 440), GPR_U64(ctx, 13));
    // 0x15d808: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15d80c: 0xfe2001b0  sd          $zero, 0x1B0($s1)
    ctx->pc = 0x15d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 0));
    // 0x15d810: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x15d810u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d814: 0xfe2e01c8  sd          $t6, 0x1C8($s1)
    ctx->pc = 0x15d814u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 456), GPR_U64(ctx, 14));
    // 0x15d818: 0xfe2201c0  sd          $v0, 0x1C0($s1)
    ctx->pc = 0x15d818u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 2));
    // 0x15d81c: 0xfe2401d0  sd          $a0, 0x1D0($s1)
    ctx->pc = 0x15d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 4));
    // 0x15d820: 0xfe2301d8  sd          $v1, 0x1D8($s1)
    ctx->pc = 0x15d820u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 3));
    // 0x15d824: 0x0  nop
    ctx->pc = 0x15d824u;
    // NOP
label_15d828:
    // 0x15d828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d82c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15D82Cu;
    SET_GPR_U32(ctx, 31, 0x15D834u);
    ctx->pc = 0x15D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D82Cu;
    // 0x15d830: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15D82Cu, 0x15D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D834u;
label_15d834:
    // 0x15d834: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x15d838: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x15d838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x15d83c: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x15d840: 0x8cc21180  lw          $v0, 0x1180($a2)
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15d844: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x15d848: 0x8ce56b80  lw          $a1, 0x6B80($a3)
    ctx->pc = 0x15d848u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x15d84c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15d850: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d858: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d85c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15d85cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15d860: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15d860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15d864: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x15d864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x15d868: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d86c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d870: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15d870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15d874: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15d874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15d878: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15d878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15d87c: 0x1680ffea  bnez        $s4, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15D87Cu;
    {
        const bool branch_taken_0x15d87c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D87Cu;
        // 0x15d880: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d87c) {
            ctx->pc = 0x15D828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d828;
        }
    }
    ctx->pc = 0x15D884u;
    // 0x15d884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15d884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15d888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15d888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d88c: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x15d88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15d890: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x15d894: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x15d894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15d898: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15d898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15d89c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15d8a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x15d8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15d8a4: 0x3c42025  or          $a0, $fp, $a0
    ctx->pc = 0x15d8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x15d8a8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15d8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d8ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d8b0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15d8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15d8b4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15d8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15d8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15d8bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d8c0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d8c4: 0x3403815a  ori         $v1, $zero, 0x815A
    ctx->pc = 0x15d8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33114);
    // 0x15d8c8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x15d8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15d8cc: 0x34638005  ori         $v1, $v1, 0x8005
    ctx->pc = 0x15d8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x15d8d0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15d8d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8d8: 0xfe2501f8  sd          $a1, 0x1F8($s1)
    ctx->pc = 0x15d8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 5));
    // 0x15d8dc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x15d8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15d8e0: 0xfe2301e0  sd          $v1, 0x1E0($s1)
    ctx->pc = 0x15d8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 480), GPR_U64(ctx, 3));
    // 0x15d8e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d8e8: 0xfe2201e8  sd          $v0, 0x1E8($s1)
    ctx->pc = 0x15d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 2));
    // 0x15d8ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15d8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15d8f0: 0xfe2401f0  sd          $a0, 0x1F0($s1)
    ctx->pc = 0x15d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 4));
    // 0x15d8f4: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x15d8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x15d8f8: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x15d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x15d8fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15d900: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x15d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15d904: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d908: 0x4213b  dsra        $a0, $a0, 4
    ctx->pc = 0x15d908u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 4);
    // 0x15d90c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15d90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15d910: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x15d910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15d914: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15d918: 0xfe260218  sd          $a2, 0x218($s1)
    ctx->pc = 0x15d918u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 536), GPR_U64(ctx, 6));
    // 0x15d91c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15d920: 0xfe220210  sd          $v0, 0x210($s1)
    ctx->pc = 0x15d920u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 2));
    // 0x15d924: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15d928: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d92c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d930: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d934: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d938: 0xfe270238  sd          $a3, 0x238($s1)
    ctx->pc = 0x15d938u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 7));
    // 0x15d93c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d940: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d944: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d948: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x15d948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15d94c: 0xfe230230  sd          $v1, 0x230($s1)
    ctx->pc = 0x15d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 3));
    // 0x15d950: 0xfe280228  sd          $t0, 0x228($s1)
    ctx->pc = 0x15d950u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 8));
    // 0x15d954: 0xfe290240  sd          $t1, 0x240($s1)
    ctx->pc = 0x15d954u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 9));
    // 0x15d958: 0xae250248  sw          $a1, 0x248($s1)
    ctx->pc = 0x15d958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
    // 0x15d95c: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x15d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x15d960: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x15d960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
    // 0x15d964: 0xfe280208  sd          $t0, 0x208($s1)
    ctx->pc = 0x15d964u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 8));
    // 0x15d968: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15d968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15d96c: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x15D96Cu;
    {
        const bool branch_taken_0x15d96c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D96Cu;
        // 0x15d970: 0xae20024c  sw          $zero, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d96c) {
            ctx->pc = 0x15DADCu;
            goto label_15dadc;
        }
    }
    ctx->pc = 0x15D974u;
    // 0x15d974: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15d978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d97c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15D97Cu;
    {
        const bool branch_taken_0x15d97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d97c) {
            ctx->pc = 0x15D980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15D97Cu;
            // 0x15d980: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15D9A8u;
            goto label_15d9a8;
        }
    }
    ctx->pc = 0x15D984u;
    // 0x15d984: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x15d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d988: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x15d988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x15d98c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x15d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d990: 0xe6210204  swc1        $f1, 0x204($s1)
    ctx->pc = 0x15d990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x15d994: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x15d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d998: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15d998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15d99c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x15d99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d9a0: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x15d9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15d9a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15d9a8:
    // 0x15d9a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15d9ac: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15D9ACu;
    {
        const bool branch_taken_0x15d9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9ACu;
        // 0x15d9b0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9ac) {
            ctx->pc = 0x15DA5Cu;
            goto label_15da5c;
        }
    }
    ctx->pc = 0x15D9B4u;
    // 0x15d9b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x15d9b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d9bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d9c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15d9c8: 0x0  nop
    ctx->pc = 0x15d9c8u;
    // NOP
    // 0x15d9cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15d9d0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x15d9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d9d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d9d8: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x15d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d9dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15d9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15d9e0: 0x0  nop
    ctx->pc = 0x15d9e0u;
    // NOP
    // 0x15d9e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15d9e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15d9ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15d9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15d9f0: 0xc6240220  lwc1        $f4, 0x220($s1)
    ctx->pc = 0x15d9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15d9f4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d9f8: 0xc6250200  lwc1        $f5, 0x200($s1)
    ctx->pc = 0x15d9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15d9fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15d9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15da00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15da04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15da04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15da08: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x15da08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15da0c: 0xc6230204  lwc1        $f3, 0x204($s1)
    ctx->pc = 0x15da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15da10: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x15da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15da14: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x15da14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x15da18: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15da18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15da1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15da1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15da20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15da24: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15da24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15da28: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15da28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15da2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15da30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15da30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15da34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15da34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15da38: 0xfe240230  sd          $a0, 0x230($s1)
    ctx->pc = 0x15da38u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 4));
    // 0x15da3c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x15da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15da40: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x15da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15da44: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15da44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15da48: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15da48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15da4c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x15da4cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x15da50: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15da50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15da54: 0xe6250220  swc1        $f5, 0x220($s1)
    ctx->pc = 0x15da54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15da58: 0xe6230224  swc1        $f3, 0x224($s1)
    ctx->pc = 0x15da58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_15da5c:
    // 0x15da5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15da60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15da60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15da64: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15DA64u;
    {
        const bool branch_taken_0x15da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA64u;
        // 0x15da68: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da64) {
            ctx->pc = 0x15DADCu;
            goto label_15dadc;
        }
    }
    ctx->pc = 0x15DA6Cu;
    // 0x15da6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x15da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15da70: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15da74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15da78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15da7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15da7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15da80: 0x0  nop
    ctx->pc = 0x15da80u;
    // NOP
    // 0x15da84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15da84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15da88: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x15da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15da8c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x15da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15da90: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x15da90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15da94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15da94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15da98: 0x0  nop
    ctx->pc = 0x15da98u;
    // NOP
    // 0x15da9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15da9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15daa0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x15daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15daa4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15daa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15daa8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15daa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15daac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15daacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15dab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15dab4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15dab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15dab8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15dab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15dabc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15dabcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15dac0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x15dac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15dac4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15dac8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15dac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15dacc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15dad0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15dad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15dad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15dad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15dad8: 0xfe230210  sd          $v1, 0x210($s1)
    ctx->pc = 0x15dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 3));
label_15dadc:
    // 0x15dadc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15dae0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15dae4: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x15dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15dae8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15daec: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x15daecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15daf0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15DAF0u;
    SET_GPR_U32(ctx, 31, 0x15DAF8u);
    ctx->pc = 0x15DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAF0u;
    // 0x15daf4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15DAF0u, 0x15DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAF8u;
label_15daf8:
    // 0x15daf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15daf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dafc:
    // 0x15dafc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x15dafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15db00: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x15db00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15db04: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15db04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15db08: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x15db08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15db0c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x15db0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15db10: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x15db10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15db14: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15db14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15db18: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x15db18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15db1c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x15db1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15db20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15db20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15db24: 0x3e00008  jr          $ra
    ctx->pc = 0x15DB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB24u;
        // 0x15db28: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DB2Cu;
    // 0x15db2c: 0x0  nop
    ctx->pc = 0x15db2cu;
    // NOP
    ctx->pc = 0x15db30u;
}
