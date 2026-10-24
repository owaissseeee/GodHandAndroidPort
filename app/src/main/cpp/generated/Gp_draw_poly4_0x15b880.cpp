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

// Function: Gp_draw_poly4
// Address: 0x15b880 - 0x15bcf0
void Gp_draw_poly4_0x15b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_draw_poly4_0x15b880");
#endif

    switch (ctx->pc) {
        case 0x15b8ccu: goto label_15b8cc;
        case 0x15b978u: goto label_15b978;
        case 0x15b980u: goto label_15b980;
        case 0x15b998u: goto label_15b998;
        case 0x15ba90u: goto label_15ba90;
        case 0x15baa4u: goto label_15baa4;
        case 0x15bca0u: goto label_15bca0;
        case 0x15bcbcu: goto label_15bcbc;
        default: break;
    }

    ctx->pc = 0x15b880u;

    // 0x15b880: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x15b884: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x15b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x15b888: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x15b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x15b88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b890: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x15b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x15b894: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15b894u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b898: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x15b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x15b89c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x15b89cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8a0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x15b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x15b8a4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x15b8a8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x15b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x15b8ac: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x15b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x15b8b0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x15b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x15b8b4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x15b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x15b8b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15b8bc: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x15b8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x15b8c0: 0xafa80084  sw          $t0, 0x84($sp)
    ctx->pc = 0x15b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 8));
    // 0x15b8c4: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15B8C4u;
    SET_GPR_U32(ctx, 31, 0x15B8CCu);
    ctx->pc = 0x15B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B8C4u;
    // 0x15b8c8: 0xafa90088  sw          $t1, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15B8C4u, 0x15B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8CCu;
label_15b8cc:
    // 0x15b8cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15b8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8d0: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B8D0u;
    {
        const bool branch_taken_0x15b8d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8D0u;
        // 0x15b8d4: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8d0) {
            ctx->pc = 0x15B8E0u;
            goto label_15b8e0;
        }
    }
    ctx->pc = 0x15B8D8u;
    // 0x15b8d8: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x15B8D8u;
    {
        const bool branch_taken_0x15b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8D8u;
        // 0x15b8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b8d8) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15B8E0u;
label_15b8e0:
    // 0x15b8e0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15b8e4: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x15b8e8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x15b8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x15b8ec: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x15b8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x15b8f0: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x15b8f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x15b8f4: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x15b8f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x15b8f8: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x15b8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x15b8fc: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x15b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x15b900: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x15b900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x15b904: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x15b904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x15b908: 0x24070eee  addiu       $a3, $zero, 0xEEE
    ctx->pc = 0x15b908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x15b90c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x15b90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15b910: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b914: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x15b914u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15b918: 0xa5638  dsll        $t2, $t2, 24
    ctx->pc = 0x15b918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 24);
    // 0x15b91c: 0x354a0044  ori         $t2, $t2, 0x44
    ctx->pc = 0x15b91cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)68);
    // 0x15b920: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15b924: 0x3c0c0005  lui         $t4, 0x5
    ctx->pc = 0x15b924u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)5 << 16));
    // 0x15b928: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15b92c: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x15b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x15b930: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15b934: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x15b934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x15b938: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15b938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x15b93c: 0xfe460010  sd          $a2, 0x10($s2)
    ctx->pc = 0x15b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 6));
    // 0x15b940: 0xfe470018  sd          $a3, 0x18($s2)
    ctx->pc = 0x15b940u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 7));
    // 0x15b944: 0xfe480020  sd          $t0, 0x20($s2)
    ctx->pc = 0x15b944u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 8));
    // 0x15b948: 0xfe490028  sd          $t1, 0x28($s2)
    ctx->pc = 0x15b948u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 9));
    // 0x15b94c: 0xfe4a0030  sd          $t2, 0x30($s2)
    ctx->pc = 0x15b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 10));
    // 0x15b950: 0xfe4b0038  sd          $t3, 0x38($s2)
    ctx->pc = 0x15b950u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 11));
    // 0x15b954: 0xfe4c0040  sd          $t4, 0x40($s2)
    ctx->pc = 0x15b954u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 12));
    // 0x15b958: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x15B958u;
    {
        const bool branch_taken_0x15b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B958u;
        // 0x15b95c: 0xfe4d0048  sd          $t5, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b958) {
            ctx->pc = 0x15BA74u;
            goto label_15ba74;
        }
    }
    ctx->pc = 0x15B960u;
    // 0x15b960: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15b964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b968: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x15b968u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15b96c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15b970: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15B970u;
    SET_GPR_U32(ctx, 31, 0x15B978u);
    ctx->pc = 0x15B974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B970u;
    // 0x15b974: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15B970u, 0x15B978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B978u;
label_15b978:
    // 0x15b978: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15b978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b97c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15b980:
    // 0x15b980: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15b980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b984: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15b988: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b98c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b990: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15B990u;
    SET_GPR_U32(ctx, 31, 0x15B998u);
    ctx->pc = 0x15B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B990u;
    // 0x15b994: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15B990u, 0x15B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B998u;
label_15b998:
    // 0x15b998: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15b99c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15B99Cu;
    {
        const bool branch_taken_0x15b99c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B99Cu;
        // 0x15b9a0: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b99c) {
            ctx->pc = 0x15B980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b980;
        }
    }
    ctx->pc = 0x15B9A4u;
    // 0x15b9a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b9a8: 0x184000c4  blez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x15B9A8u;
    {
        const bool branch_taken_0x15b9a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9A8u;
        // 0x15b9ac: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9a8) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15B9B0u;
    // 0x15b9b0: 0x188000c2  blez        $a0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x15B9B0u;
    {
        const bool branch_taken_0x15b9b0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x15B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9B0u;
        // 0x15b9b4: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9b0) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15B9B8u;
    // 0x15b9b8: 0x18a000c0  blez        $a1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x15B9B8u;
    {
        const bool branch_taken_0x15b9b8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x15B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9B8u;
        // 0x15b9bc: 0x8fa60070  lw          $a2, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9b8) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15B9C0u;
    // 0x15b9c0: 0x18c000be  blez        $a2, . + 4 + (0xBE << 2)
    ctx->pc = 0x15B9C0u;
    {
        const bool branch_taken_0x15b9c0 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9C0u;
        // 0x15b9c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9c0) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15B9C8u;
    // 0x15b9c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15b9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b9cc: 0x144000bc  bnez        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x15B9CCu;
    {
        const bool branch_taken_0x15b9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9CCu;
        // 0x15b9d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9cc) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15B9D4u;
    // 0x15b9d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x15b9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15b9d8: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x15B9D8u;
    {
        const bool branch_taken_0x15b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9D8u;
        // 0x15b9dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9d8) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15B9E0u;
    // 0x15b9e0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x15b9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15b9e4: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x15B9E4u;
    {
        const bool branch_taken_0x15b9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9E4u;
        // 0x15b9e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9e4) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15B9ECu;
    // 0x15b9ec: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x15b9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15b9f0: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x15B9F0u;
    {
        const bool branch_taken_0x15b9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9F0u;
        // 0x15b9f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9f0) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15B9F8u;
    // 0x15b9f8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15b9fc: 0x184000af  blez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x15B9FCu;
    {
        const bool branch_taken_0x15b9fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B9FCu;
        // 0x15ba00: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9fc) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA04u;
    // 0x15ba04: 0x188000ad  blez        $a0, . + 4 + (0xAD << 2)
    ctx->pc = 0x15BA04u;
    {
        const bool branch_taken_0x15ba04 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x15BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA04u;
        // 0x15ba08: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba04) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA0Cu;
    // 0x15ba0c: 0x18a000ab  blez        $a1, . + 4 + (0xAB << 2)
    ctx->pc = 0x15BA0Cu;
    {
        const bool branch_taken_0x15ba0c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x15BA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA0Cu;
        // 0x15ba10: 0x8fa60074  lw          $a2, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba0c) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA14u;
    // 0x15ba14: 0x18c000a9  blez        $a2, . + 4 + (0xA9 << 2)
    ctx->pc = 0x15BA14u;
    {
        const bool branch_taken_0x15ba14 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA14u;
        // 0x15ba18: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba14) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA1Cu;
    // 0x15ba1c: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x15BA1Cu;
    {
        const bool branch_taken_0x15ba1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA1Cu;
        // 0x15ba20: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba1c) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BA24u;
    // 0x15ba24: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x15ba24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15ba28: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x15BA28u;
    {
        const bool branch_taken_0x15ba28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA28u;
        // 0x15ba2c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba28) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BA30u;
    // 0x15ba30: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x15ba30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15ba34: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x15BA34u;
    {
        const bool branch_taken_0x15ba34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA34u;
        // 0x15ba38: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba34) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BA3Cu;
    // 0x15ba3c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x15ba3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15ba40: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x15BA40u;
    {
        const bool branch_taken_0x15ba40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA40u;
        // 0x15ba44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba40) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BA48u;
    // 0x15ba48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ba4c: 0x1840009b  blez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x15BA4Cu;
    {
        const bool branch_taken_0x15ba4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA4Cu;
        // 0x15ba50: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba4c) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA54u;
    // 0x15ba54: 0x18400099  blez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x15BA54u;
    {
        const bool branch_taken_0x15ba54 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA54u;
        // 0x15ba58: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba54) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA5Cu;
    // 0x15ba5c: 0x18400097  blez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x15BA5Cu;
    {
        const bool branch_taken_0x15ba5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA5Cu;
        // 0x15ba60: 0x8fa20078  lw          $v0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba5c) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BA64u;
    // 0x15ba64: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15BA64u;
    {
        const bool branch_taken_0x15ba64 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x15BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA64u;
        // 0x15ba68: 0x151202  srl         $v0, $s5, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba64) {
            ctx->pc = 0x15BAF0u;
            goto label_15baf0;
        }
    }
    ctx->pc = 0x15BA6Cu;
    // 0x15ba6c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x15BA6Cu;
    {
        const bool branch_taken_0x15ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA6Cu;
        // 0x15ba70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba6c) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BA74u;
label_15ba74:
    // 0x15ba74: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15ba78: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ba7c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ba80: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x15ba80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x15ba84: 0x24160800  addiu       $s6, $zero, 0x800
    ctx->pc = 0x15ba84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15ba88: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15ba88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ba8c: 0x0  nop
    ctx->pc = 0x15ba8cu;
    // NOP
label_15ba90:
    // 0x15ba90: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x15ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15ba94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ba94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba98: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15ba9c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15BA9Cu;
    SET_GPR_U32(ctx, 31, 0x15BAA4u);
    ctx->pc = 0x15BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA9Cu;
    // 0x15baa0: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15BA9Cu, 0x15BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAA4u;
label_15baa4:
    // 0x15baa4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15baa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x15baa8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x15baac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15baacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15bab0: 0x8ca21180  lw          $v0, 0x1180($a1)
    ctx->pc = 0x15bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15bab4: 0x8ee56b80  lw          $a1, 0x6B80($s7)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x15bab8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15babc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15bac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bac4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15bac8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15bacc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bad0: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x15bad4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15bad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15badc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15bae0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15bae4: 0x1660ffea  bnez        $s3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x15BAE4u;
    {
        const bool branch_taken_0x15bae4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAE4u;
        // 0x15bae8: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bae4) {
            ctx->pc = 0x15BA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ba90;
        }
    }
    ctx->pc = 0x15BAECu;
    // 0x15baec: 0x151202  srl         $v0, $s5, 8
    ctx->pc = 0x15baecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
label_15baf0:
    // 0x15baf0: 0x152c02  srl         $a1, $s5, 16
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
    // 0x15baf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15baf8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15baf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15bafc: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x15bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x15bb00: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x15bb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15bb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bb0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15bb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15bb10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15bb10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15bb14: 0x152602  srl         $a0, $s5, 24
    ctx->pc = 0x15bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x15bb18: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15bb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15bb1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15bb1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15bb20: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15bb20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15bb24: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x15bb24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x15bb28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15bb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bb2c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15bb30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x15bb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bb34: 0x34048112  ori         $a0, $zero, 0x8112
    ctx->pc = 0x15bb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33042);
    // 0x15bb38: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x15bb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x15bb3c: 0x34848005  ori         $a0, $a0, 0x8005
    ctx->pc = 0x15bb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32773);
    // 0x15bb40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15bb44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bb48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15bb4c: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x15bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x15bb50: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15bb54: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x15bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x15bb58: 0xfe420058  sd          $v0, 0x58($s2)
    ctx->pc = 0x15bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 2));
    // 0x15bb5c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x15bb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15bb60: 0xfe450068  sd          $a1, 0x68($s2)
    ctx->pc = 0x15bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 5));
    // 0x15bb64: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15bb68: 0x240903ff  addiu       $t1, $zero, 0x3FF
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15bb6c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15bb70: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15bb74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bb78: 0x5193b  dsra        $v1, $a1, 4
    ctx->pc = 0x15bb78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> 4);
    // 0x15bb7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15bb80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15bb84: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15bb84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15bb88: 0xfe480078  sd          $t0, 0x78($s2)
    ctx->pc = 0x15bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 8));
    // 0x15bb8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15bb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15bb90: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x15bb94: 0xfe440070  sd          $a0, 0x70($s2)
    ctx->pc = 0x15bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 4));
    // 0x15bb98: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15bb9c: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x15bb9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15bba0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x15bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15bba4: 0x24c60032  addiu       $a2, $a2, 0x32
    ctx->pc = 0x15bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x15bba8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15bbac: 0x28c50400  slti        $a1, $a2, 0x400
    ctx->pc = 0x15bbacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15bbb0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bbb4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15bbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15bbb8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15bbb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15bbbc: 0xfe470088  sd          $a3, 0x88($s2)
    ctx->pc = 0x15bbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 7));
    // 0x15bbc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bbc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15bbc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15bbcc: 0x125300a  movz        $a2, $t1, $a1
    ctx->pc = 0x15bbccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    // 0x15bbd0: 0xfe430080  sd          $v1, 0x80($s2)
    ctx->pc = 0x15bbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 128), GPR_U64(ctx, 3));
    // 0x15bbd4: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x15bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15bbd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x15bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15bbdc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x15bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bbe0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15bbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15bbe4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15bbe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15bbe8: 0xfe470098  sd          $a3, 0x98($s2)
    ctx->pc = 0x15bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 7));
    // 0x15bbec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bbf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15bbf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15bbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15bbf8: 0xfe430090  sd          $v1, 0x90($s2)
    ctx->pc = 0x15bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 3));
    // 0x15bbfc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x15bbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15bc00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15bc04: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15bc08: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15bc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15bc0c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15bc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15bc10: 0xfe4700a8  sd          $a3, 0xA8($s2)
    ctx->pc = 0x15bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 168), GPR_U64(ctx, 7));
    // 0x15bc14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bc18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15bc1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15bc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15bc20: 0x13c0000d  beqz        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x15BC20u;
    {
        const bool branch_taken_0x15bc20 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC20u;
        // 0x15bc24: 0xfe4300a0  sd          $v1, 0xA0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc20) {
            ctx->pc = 0x15BC58u;
            goto label_15bc58;
        }
    }
    ctx->pc = 0x15BC28u;
    // 0x15bc28: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x15bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x15bc2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15bc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15bc30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC30u;
    {
        const bool branch_taken_0x15bc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc30) {
            ctx->pc = 0x15BC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BC30u;
            // 0x15bc34: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BC44u;
            goto label_15bc44;
        }
    }
    ctx->pc = 0x15BC38u;
    // 0x15bc38: 0xdfc20030  ld          $v0, 0x30($fp)
    ctx->pc = 0x15bc38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x15bc3c: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x15bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x15bc40: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x15bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_15bc44:
    // 0x15bc44: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15bc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15bc48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC48u;
    {
        const bool branch_taken_0x15bc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC48u;
        // 0x15bc4c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc48) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BC50u;
    // 0x15bc50: 0xdfc20038  ld          $v0, 0x38($fp)
    ctx->pc = 0x15bc50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x15bc54: 0xfe420030  sd          $v0, 0x30($s2)
    ctx->pc = 0x15bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 2));
label_15bc58:
    // 0x15bc58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_15bc5c:
    // 0x15bc5c: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15BC5Cu;
    {
        const bool branch_taken_0x15bc5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x15BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC5Cu;
        // 0x15bc60: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc5c) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BC64u;
    // 0x15bc64: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x15bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15bc68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15BC68u;
    {
        const bool branch_taken_0x15bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC68u;
        // 0x15bc6c: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc68) {
            ctx->pc = 0x15BCA8u;
            goto label_15bca8;
        }
    }
    ctx->pc = 0x15BC70u;
    // 0x15bc70: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x15BC70u;
    {
        const bool branch_taken_0x15bc70 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc70) {
            ctx->pc = 0x15BCBCu;
            goto label_15bcbc;
        }
    }
    ctx->pc = 0x15BC78u;
    // 0x15bc78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bc7c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BC7Cu;
    {
        const bool branch_taken_0x15bc7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC7Cu;
        // 0x15bc80: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc7c) {
            ctx->pc = 0x15BC8Cu;
            goto label_15bc8c;
        }
    }
    ctx->pc = 0x15BC84u;
    // 0x15bc84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BC84u;
    {
        const bool branch_taken_0x15bc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC84u;
        // 0x15bc88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc84) {
            ctx->pc = 0x15BC94u;
            goto label_15bc94;
        }
    }
    ctx->pc = 0x15BC8Cu;
label_15bc8c:
    // 0x15bc8c: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x15bc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15bc90: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_15bc94:
    // 0x15bc94: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15bc98: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15BC98u;
    SET_GPR_U32(ctx, 31, 0x15BCA0u);
    ctx->pc = 0x15BC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC98u;
    // 0x15bc9c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15BC98u, 0x15BCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCA0u;
label_15bca0:
    // 0x15bca0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BCA0u;
    {
        const bool branch_taken_0x15bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA0u;
        // 0x15bca4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bca0) {
            ctx->pc = 0x15BCC0u;
            goto label_15bcc0;
        }
    }
    ctx->pc = 0x15BCA8u;
label_15bca8:
    // 0x15bca8: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x15bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15bcac: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x15bcacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15bcb0: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15bcb4: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15BCB4u;
    SET_GPR_U32(ctx, 31, 0x15BCBCu);
    ctx->pc = 0x15BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BCB4u;
    // 0x15bcb8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15BCB4u, 0x15BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCBCu;
label_15bcbc:
    // 0x15bcbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15bcbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15bcc0:
    // 0x15bcc0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x15bcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15bcc4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x15bcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15bcc8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x15bcc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15bccc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x15bcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15bcd0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x15bcd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15bcd4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x15bcd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15bcd8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x15bcd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15bcdc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x15bcdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15bce0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x15bce0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15bce4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15bce8: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCE8u;
        // 0x15bcec: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BCF0u;
}
