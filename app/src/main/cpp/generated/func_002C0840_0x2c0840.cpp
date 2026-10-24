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

// Function: func_002C0840
// Address: 0x2c0840 - 0x2c09e8
void func_002C0840_0x2c0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0840_0x2c0840");
#endif

    switch (ctx->pc) {
        case 0x2c0880u: goto label_2c0880;
        case 0x2c08acu: goto label_2c08ac;
        case 0x2c08e8u: goto label_2c08e8;
        case 0x2c08f4u: goto label_2c08f4;
        case 0x2c08fcu: goto label_2c08fc;
        case 0x2c0908u: goto label_2c0908;
        case 0x2c092cu: goto label_2c092c;
        case 0x2c0938u: goto label_2c0938;
        case 0x2c097cu: goto label_2c097c;
        case 0x2c09b0u: goto label_2c09b0;
        default: break;
    }

    ctx->pc = 0x2c0840u;

    // 0x2c0840: 0x27bdeb00  addiu       $sp, $sp, -0x1500
    ctx->pc = 0x2c0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294961920));
    // 0x2c0844: 0x7fb114e0  sq          $s1, 0x14E0($sp)
    ctx->pc = 0x2c0844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5344), GPR_VEC(ctx, 17));
    // 0x2c0848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c084c: 0x7fb014f0  sq          $s0, 0x14F0($sp)
    ctx->pc = 0x2c084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5360), GPR_VEC(ctx, 16));
    // 0x2c0850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c0850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0854: 0x7fb214d0  sq          $s2, 0x14D0($sp)
    ctx->pc = 0x2c0854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5328), GPR_VEC(ctx, 18));
    // 0x2c0858: 0x7fb314c0  sq          $s3, 0x14C0($sp)
    ctx->pc = 0x2c0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5312), GPR_VEC(ctx, 19));
    // 0x2c085c: 0x7fb414b0  sq          $s4, 0x14B0($sp)
    ctx->pc = 0x2c085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5296), GPR_VEC(ctx, 20));
    // 0x2c0860: 0xffbf14a0  sd          $ra, 0x14A0($sp)
    ctx->pc = 0x2c0860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5280), GPR_U64(ctx, 31));
    // 0x2c0864: 0xfba00190  sqc2        $vf0, 0x190($sp)
    ctx->pc = 0x2c0864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c0868: 0x27a2028a  addiu       $v0, $sp, 0x28A
    ctx->pc = 0x2c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 650));
    // 0x2c086c: 0x3c120057  lui         $s2, 0x57
    ctx->pc = 0x2c086cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)87 << 16));
    // 0x2c0870: 0x27b30a8a  addiu       $s3, $sp, 0xA8A
    ctx->pc = 0x2c0870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 2698));
    // 0x2c0874: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c0874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0878: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c0878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c087c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2c087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2c0880:
    // 0x2c0880: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x2c0880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c0884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c0888: 0x0  nop
    ctx->pc = 0x2c0888u;
    // NOP
    // 0x2c088c: 0x0  nop
    ctx->pc = 0x2c088cu;
    // NOP
    // 0x2c0890: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C0890u;
    {
        const bool branch_taken_0x2c0890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0890u;
        // 0x2c0894: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0890) {
            ctx->pc = 0x2C0880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0880;
        }
    }
    ctx->pc = 0x2C0898u;
    // 0x2c0898: 0xaca00b8c  sw          $zero, 0xB8C($a1)
    ctx->pc = 0x2c0898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2956), GPR_U32(ctx, 0));
    // 0x2c089c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08a0: 0x240614a0  addiu       $a2, $zero, 0x14A0
    ctx->pc = 0x2c08a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5280));
    // 0x2c08a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C08A4u;
    SET_GPR_U32(ctx, 31, 0x2C08ACu);
    ctx->pc = 0x2C08A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08A4u;
    // 0x2c08a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C08A4u, 0x2C08ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08ACu;
label_2c08ac:
    // 0x2c08ac: 0x26509b70  addiu       $s0, $s2, -0x6490
    ctx->pc = 0x2c08acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    // 0x2c08b0: 0x96280010  lhu         $t0, 0x10($s1)
    ctx->pc = 0x2c08b0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c08b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c08b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08b8: 0x9222001f  lbu         $v0, 0x1F($s1)
    ctx->pc = 0x2c08b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 31)));
    // 0x2c08bc: 0x8e230b90  lw          $v1, 0xB90($s1)
    ctx->pc = 0x2c08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2960)));
    // 0x2c08c0: 0x8e260174  lw          $a2, 0x174($s1)
    ctx->pc = 0x2c08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2c08c4: 0x8e270178  lw          $a3, 0x178($s1)
    ctx->pc = 0x2c08c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x2c08c8: 0x8e250170  lw          $a1, 0x170($s1)
    ctx->pc = 0x2c08c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2c08cc: 0xa7a80010  sh          $t0, 0x10($sp)
    ctx->pc = 0x2c08ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c08d0: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x2c08d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c08d4: 0xafa30b90  sw          $v1, 0xB90($sp)
    ctx->pc = 0x2c08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2960), GPR_U32(ctx, 3));
    // 0x2c08d8: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x2c08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
    // 0x2c08dc: 0xafa60174  sw          $a2, 0x174($sp)
    ctx->pc = 0x2c08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 6));
    // 0x2c08e0: 0xc07e612  jal         func_1F9848
    ctx->pc = 0x2C08E0u;
    SET_GPR_U32(ctx, 31, 0x2C08E8u);
    ctx->pc = 0x2C08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08E0u;
    // 0x2c08e4: 0xafa70178  sw          $a3, 0x178($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9848u, 0x2C08E0u, 0x2C08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08E8u;
label_2c08e8:
    // 0x2c08e8: 0x83a5001f  lb          $a1, 0x1F($sp)
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x2c08ec: 0xc07e996  jal         func_1FA658
    ctx->pc = 0x2C08ECu;
    SET_GPR_U32(ctx, 31, 0x2C08F4u);
    ctx->pc = 0x2C08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08ECu;
    // 0x2c08f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA658u, 0x2C08ECu, 0x2C08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08F4u;
label_2c08f4:
    // 0x2c08f4: 0xc07e634  jal         func_1F98D0
    ctx->pc = 0x2C08F4u;
    SET_GPR_U32(ctx, 31, 0x2C08FCu);
    ctx->pc = 0x2C08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08F4u;
    // 0x2c08f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D0u, 0x2C08F4u, 0x2C08FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08FCu;
label_2c08fc:
    // 0x2c08fc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2c08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2c0900: 0xc0b66f0  jal         func_2D9BC0
    ctx->pc = 0x2C0900u;
    SET_GPR_U32(ctx, 31, 0x2C0908u);
    ctx->pc = 0x2C0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0900u;
    // 0x2c0904: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BC0u, 0x2C0900u, 0x2C0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0908u;
label_2c0908:
    // 0x2c0908: 0x8e439b70  lw          $v1, -0x6490($s2)
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x2c090c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c090cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c0910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0918: 0x8c620b8c  lw          $v0, 0xB8C($v1)
    ctx->pc = 0x2c0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2956)));
    // 0x2c091c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c091cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0920: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c0924: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x2C0924u;
    SET_GPR_U32(ctx, 31, 0x2C092Cu);
    ctx->pc = 0x2C0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0924u;
    // 0x2c0928: 0xac620b8c  sw          $v0, 0xB8C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2956), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x2C0924u, 0x2C092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C092Cu;
label_2c092c:
    // 0x2c092c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2c0930: 0xc0aa642  jal         func_2A9908
    ctx->pc = 0x2C0930u;
    SET_GPR_U32(ctx, 31, 0x2C0938u);
    ctx->pc = 0x2C0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0930u;
    // 0x2c0934: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9908u, 0x2C0930u, 0x2C0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0938u;
label_2c0938:
    // 0x2c0938: 0x97a80010  lhu         $t0, 0x10($sp)
    ctx->pc = 0x2c0938u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c093c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2c093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c0940: 0x93a7001f  lbu         $a3, 0x1F($sp)
    ctx->pc = 0x2c0940u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x2c0944: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2c0944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0948: 0x8fa60b90  lw          $a2, 0xB90($sp)
    ctx->pc = 0x2c0948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2960)));
    // 0x2c094c: 0x252a14a0  addiu       $t2, $t1, 0x14A0
    ctx->pc = 0x2c094cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 5280));
    // 0x2c0950: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2c0954: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x2c0954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2c0958: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2c0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2c095c: 0xa625000c  sh          $a1, 0xC($s1)
    ctx->pc = 0x2c095cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c0960: 0xa6280010  sh          $t0, 0x10($s1)
    ctx->pc = 0x2c0960u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c0964: 0xa227001f  sb          $a3, 0x1F($s1)
    ctx->pc = 0x2c0964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 31), (uint8_t)GPR_U32(ctx, 7));
    // 0x2c0968: 0xae260b90  sw          $a2, 0xB90($s1)
    ctx->pc = 0x2c0968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2960), GPR_U32(ctx, 6));
    // 0x2c096c: 0xae220170  sw          $v0, 0x170($s1)
    ctx->pc = 0x2c096cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 2));
    // 0x2c0970: 0xae230174  sw          $v1, 0x174($s1)
    ctx->pc = 0x2c0970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 3));
    // 0x2c0974: 0xae240178  sw          $a0, 0x178($s1)
    ctx->pc = 0x2c0974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 4));
    // 0x2c0978: 0x8e509b70  lw          $s0, -0x6490($s2)
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
label_2c097c:
    // 0x2c097c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x2c097cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c0980: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x2c0980u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c0984: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c0984u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2c0988: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c0988u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2c098c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2c098cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x2c0990: 0x152afffa  bne         $t1, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C0990u;
    {
        const bool branch_taken_0x2c0990 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x2C0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0990u;
        // 0x2c0994: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0990) {
            ctx->pc = 0x2C097Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c097c;
        }
    }
    ctx->pc = 0x2C0998u;
    // 0x2c0998: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c0998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c099c: 0x5282000b  beql        $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C099Cu;
    {
        const bool branch_taken_0x2c099c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c099c) {
            ctx->pc = 0x2C09A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C099Cu;
            // 0x2c09a0: 0x7bb014f0  lq          $s0, 0x14F0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 5360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C09CCu;
            goto label_2c09cc;
        }
    }
    ctx->pc = 0x2C09A4u;
    // 0x2c09a4: 0x27a3028a  addiu       $v1, $sp, 0x28A
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 650));
    // 0x2c09a8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2c09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2c09ac: 0x0  nop
    ctx->pc = 0x2c09acu;
    // NOP
label_2c09b0:
    // 0x2c09b0: 0x0  nop
    ctx->pc = 0x2c09b0u;
    // NOP
    // 0x2c09b4: 0x0  nop
    ctx->pc = 0x2c09b4u;
    // NOP
    // 0x2c09b8: 0x0  nop
    ctx->pc = 0x2c09b8u;
    // NOP
    // 0x2c09bc: 0x0  nop
    ctx->pc = 0x2c09bcu;
    // NOP
    // 0x2c09c0: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C09C0u;
    {
        const bool branch_taken_0x2c09c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c09c0) {
            ctx->pc = 0x2C09C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C09C0u;
            // 0x2c09c4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C09B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c09b0;
        }
    }
    ctx->pc = 0x2C09C8u;
    // 0x2c09c8: 0x7bb014f0  lq          $s0, 0x14F0($sp)
    ctx->pc = 0x2c09c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 5360)));
label_2c09cc:
    // 0x2c09cc: 0x7bb114e0  lq          $s1, 0x14E0($sp)
    ctx->pc = 0x2c09ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 5344)));
    // 0x2c09d0: 0x7bb214d0  lq          $s2, 0x14D0($sp)
    ctx->pc = 0x2c09d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 5328)));
    // 0x2c09d4: 0x7bb314c0  lq          $s3, 0x14C0($sp)
    ctx->pc = 0x2c09d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 5312)));
    // 0x2c09d8: 0x7bb414b0  lq          $s4, 0x14B0($sp)
    ctx->pc = 0x2c09d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 5296)));
    // 0x2c09dc: 0xdfbf14a0  ld          $ra, 0x14A0($sp)
    ctx->pc = 0x2c09dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 5280)));
    // 0x2c09e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C09E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09E0u;
        // 0x2c09e4: 0x27bd1500  addiu       $sp, $sp, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C09E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C09E8u;
}
