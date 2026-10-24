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

// Function: func_003794D0
// Address: 0x3794d0 - 0x379838
void func_003794D0_0x3794d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003794D0_0x3794d0");
#endif

    switch (ctx->pc) {
        case 0x379518u: goto label_379518;
        case 0x379530u: goto label_379530;
        case 0x379544u: goto label_379544;
        case 0x379568u: goto label_379568;
        case 0x37958cu: goto label_37958c;
        case 0x3795acu: goto label_3795ac;
        case 0x3795d8u: goto label_3795d8;
        case 0x3795f4u: goto label_3795f4;
        case 0x379610u: goto label_379610;
        case 0x379628u: goto label_379628;
        case 0x37964cu: goto label_37964c;
        case 0x379668u: goto label_379668;
        case 0x379688u: goto label_379688;
        case 0x3796acu: goto label_3796ac;
        case 0x3796ccu: goto label_3796cc;
        case 0x3796f0u: goto label_3796f0;
        case 0x379710u: goto label_379710;
        case 0x379734u: goto label_379734;
        case 0x379754u: goto label_379754;
        case 0x37977cu: goto label_37977c;
        case 0x379798u: goto label_379798;
        case 0x3797b8u: goto label_3797b8;
        case 0x3797d4u: goto label_3797d4;
        case 0x3797f0u: goto label_3797f0;
        case 0x37980cu: goto label_37980c;
        case 0x379814u: goto label_379814;
        case 0x37981cu: goto label_37981c;
        default: break;
    }

    ctx->pc = 0x3794d0u;

    // 0x3794d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3794d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3794d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3794d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3794d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3794d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3794dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3794dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3794e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3794e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3794e4: 0x2671012c  addiu       $s1, $s3, 0x12C
    ctx->pc = 0x3794e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    // 0x3794e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3794e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3794ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3794ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3794f0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3794f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3794f4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3794f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3794f8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3794F8u;
    {
        const bool branch_taken_0x3794f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3794FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794F8u;
        // 0x3794fc: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794f8) {
            ctx->pc = 0x37954Cu;
            goto label_37954c;
        }
    }
    ctx->pc = 0x379500u;
    // 0x379500: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x379504: 0x2610b350  addiu       $s0, $s0, -0x4CB0
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947664));
    // 0x379508: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x379508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37950c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37950cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379510: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379510u;
    SET_GPR_U32(ctx, 31, 0x379518u);
    ctx->pc = 0x379514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379510u;
    // 0x379514: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379510u, 0x379518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379518u;
label_379518:
    // 0x379518: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37951c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x379520: 0x24e7b360  addiu       $a3, $a3, -0x4CA0
    ctx->pc = 0x379520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947680));
    // 0x379524: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379528: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379528u;
    SET_GPR_U32(ctx, 31, 0x379530u);
    ctx->pc = 0x37952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379528u;
    // 0x37952c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379528u, 0x379530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379530u;
label_379530:
    // 0x379530: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x379530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379534: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x379538: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x379538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37953c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37953Cu;
    SET_GPR_U32(ctx, 31, 0x379544u);
    ctx->pc = 0x379540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37953Cu;
    // 0x379540: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37953Cu, 0x379544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379544u;
label_379544:
    // 0x379544: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x379544u;
    {
        const bool branch_taken_0x379544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379544u;
        // 0x379548: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379544) {
            ctx->pc = 0x379820u;
            goto label_379820;
        }
    }
    ctx->pc = 0x37954Cu;
label_37954c:
    // 0x37954c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37954cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379550: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x379550u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x379554: 0x24e7b6c8  addiu       $a3, $a3, -0x4938
    ctx->pc = 0x379554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948552));
    // 0x379558: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37955c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379560: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379560u;
    SET_GPR_U32(ctx, 31, 0x379568u);
    ctx->pc = 0x379564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379560u;
    // 0x379564: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379560u, 0x379568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379568u;
label_379568:
    // 0x379568: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x379568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37956c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x379570: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379570u;
    {
        const bool branch_taken_0x379570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379570u;
        // 0x379574: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379570) {
            ctx->pc = 0x379594u;
            goto label_379594;
        }
    }
    ctx->pc = 0x379578u;
    // 0x379578: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37957c: 0x24e7b6e0  addiu       $a3, $a3, -0x4920
    ctx->pc = 0x37957cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948576));
    // 0x379580: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379584: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379584u;
    SET_GPR_U32(ctx, 31, 0x37958Cu);
    ctx->pc = 0x379588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379584u;
    // 0x379588: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379584u, 0x37958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37958Cu;
label_37958c:
    // 0x37958c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37958Cu;
    {
        const bool branch_taken_0x37958c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37958Cu;
        // 0x379590: 0x2410001b  addiu       $s0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37958c) {
            ctx->pc = 0x3795B0u;
            goto label_3795b0;
        }
    }
    ctx->pc = 0x379594u;
label_379594:
    // 0x379594: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379594u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379598: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37959c: 0x24e7b6f8  addiu       $a3, $a3, -0x4908
    ctx->pc = 0x37959cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948600));
    // 0x3795a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3795a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3795a4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3795A4u;
    SET_GPR_U32(ctx, 31, 0x3795ACu);
    ctx->pc = 0x3795A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795A4u;
    // 0x3795a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3795A4u, 0x3795ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795ACu;
label_3795ac:
    // 0x3795ac: 0x2410001b  addiu       $s0, $zero, 0x1B
    ctx->pc = 0x3795acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3795b0:
    // 0x3795b0: 0x82280009  lb          $t0, 0x9($s1)
    ctx->pc = 0x3795b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x3795b4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x3795b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3795b8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3795b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3795bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3795bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795c0: 0x24e7b710  addiu       $a3, $a3, -0x48F0
    ctx->pc = 0x3795c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948624));
    // 0x3795c4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3795c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3795c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3795cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3795ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3795D0u;
    SET_GPR_U32(ctx, 31, 0x3795D8u);
    ctx->pc = 0x3795D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795D0u;
    // 0x3795d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3795D0u, 0x3795D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795D8u;
label_3795d8:
    // 0x3795d8: 0x86280018  lh          $t0, 0x18($s1)
    ctx->pc = 0x3795d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3795dc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3795dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3795e0: 0x24e7b3e8  addiu       $a3, $a3, -0x4C18
    ctx->pc = 0x3795e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947816));
    // 0x3795e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3795e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3795e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3795e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3795ec: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3795ECu;
    SET_GPR_U32(ctx, 31, 0x3795F4u);
    ctx->pc = 0x3795F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3795ECu;
    // 0x3795f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3795ECu, 0x3795F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3795F4u;
label_3795f4:
    // 0x3795f4: 0x8628001c  lh          $t0, 0x1C($s1)
    ctx->pc = 0x3795f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3795f8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3795f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3795fc: 0x24e7b418  addiu       $a3, $a3, -0x4BE8
    ctx->pc = 0x3795fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947864));
    // 0x379600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379604: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x379604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379608: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379608u;
    SET_GPR_U32(ctx, 31, 0x379610u);
    ctx->pc = 0x37960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379608u;
    // 0x37960c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379608u, 0x379610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379610u;
label_379610:
    // 0x379610: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379618: 0x24e7b728  addiu       $a3, $a3, -0x48D8
    ctx->pc = 0x379618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948648));
    // 0x37961c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37961cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x379620: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379620u;
    SET_GPR_U32(ctx, 31, 0x379628u);
    ctx->pc = 0x379624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379620u;
    // 0x379624: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379620u, 0x379628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379628u;
label_379628:
    // 0x379628: 0x82280007  lb          $t0, 0x7($s1)
    ctx->pc = 0x379628u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x37962c: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x37962cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x379630: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379630u;
    {
        const bool branch_taken_0x379630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379630u;
        // 0x379634: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379630) {
            ctx->pc = 0x379654u;
            goto label_379654;
        }
    }
    ctx->pc = 0x379638u;
    // 0x379638: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x379638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x37963c: 0x24e7b738  addiu       $a3, $a3, -0x48C8
    ctx->pc = 0x37963cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948664));
    // 0x379640: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x379640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x379644: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379644u;
    SET_GPR_U32(ctx, 31, 0x37964Cu);
    ctx->pc = 0x379648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379644u;
    // 0x379648: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379644u, 0x37964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37964Cu;
label_37964c:
    // 0x37964c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37964Cu;
    {
        const bool branch_taken_0x37964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37964Cu;
        // 0x379650: 0x128403  sra         $s0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37964c) {
            ctx->pc = 0x37966Cu;
            goto label_37966c;
        }
    }
    ctx->pc = 0x379654u;
label_379654:
    // 0x379654: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x379654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x379658: 0x24e7b738  addiu       $a3, $a3, -0x48C8
    ctx->pc = 0x379658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948664));
    // 0x37965c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x37965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x379660: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379660u;
    SET_GPR_U32(ctx, 31, 0x379668u);
    ctx->pc = 0x379664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379660u;
    // 0x379664: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379660u, 0x379668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379668u;
label_379668:
    // 0x379668: 0x128403  sra         $s0, $s2, 16
    ctx->pc = 0x379668u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
label_37966c:
    // 0x37966c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37966cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379670: 0x82280008  lb          $t0, 0x8($s1)
    ctx->pc = 0x379670u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x379674: 0x24e7b4f0  addiu       $a3, $a3, -0x4B10
    ctx->pc = 0x379674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948080));
    // 0x379678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37967c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x379680: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379680u;
    SET_GPR_U32(ctx, 31, 0x379688u);
    ctx->pc = 0x379684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379680u;
    // 0x379684: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379680u, 0x379688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379688u;
label_379688:
    // 0x379688: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x379688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x37968c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x379690: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379690u;
    {
        const bool branch_taken_0x379690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379690u;
        // 0x379694: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379690) {
            ctx->pc = 0x3796B4u;
            goto label_3796b4;
        }
    }
    ctx->pc = 0x379698u;
    // 0x379698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37969c: 0x24e7b508  addiu       $a3, $a3, -0x4AF8
    ctx->pc = 0x37969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948104));
    // 0x3796a0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3796a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3796a4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3796A4u;
    SET_GPR_U32(ctx, 31, 0x3796ACu);
    ctx->pc = 0x3796A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796A4u;
    // 0x3796a8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3796A4u, 0x3796ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3796ACu;
label_3796ac:
    // 0x3796ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3796ACu;
    {
        const bool branch_taken_0x3796ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3796B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796ACu;
        // 0x3796b0: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3796ac) {
            ctx->pc = 0x3796D0u;
            goto label_3796d0;
        }
    }
    ctx->pc = 0x3796B4u;
label_3796b4:
    // 0x3796b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3796b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3796b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3796b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3796bc: 0x24e7b520  addiu       $a3, $a3, -0x4AE0
    ctx->pc = 0x3796bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948128));
    // 0x3796c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3796c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3796c4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3796C4u;
    SET_GPR_U32(ctx, 31, 0x3796CCu);
    ctx->pc = 0x3796C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796C4u;
    // 0x3796c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3796C4u, 0x3796CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3796CCu;
label_3796cc:
    // 0x3796cc: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3796ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3796d0:
    // 0x3796d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3796d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3796d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3796D4u;
    {
        const bool branch_taken_0x3796d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3796D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796D4u;
        // 0x3796d8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3796d4) {
            ctx->pc = 0x3796F8u;
            goto label_3796f8;
        }
    }
    ctx->pc = 0x3796DCu;
    // 0x3796dc: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x3796dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x3796e0: 0x24e7b740  addiu       $a3, $a3, -0x48C0
    ctx->pc = 0x3796e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948672));
    // 0x3796e4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3796e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3796e8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3796E8u;
    SET_GPR_U32(ctx, 31, 0x3796F0u);
    ctx->pc = 0x3796ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796E8u;
    // 0x3796ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3796E8u, 0x3796F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3796F0u;
label_3796f0:
    // 0x3796f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3796F0u;
    {
        const bool branch_taken_0x3796f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3796F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3796F0u;
        // 0x3796f4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3796f0) {
            ctx->pc = 0x379714u;
            goto label_379714;
        }
    }
    ctx->pc = 0x3796F8u;
label_3796f8:
    // 0x3796f8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3796f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3796fc: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x3796fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379700: 0x24e7b448  addiu       $a3, $a3, -0x4BB8
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947912));
    // 0x379704: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x379704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x379708: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379708u;
    SET_GPR_U32(ctx, 31, 0x379710u);
    ctx->pc = 0x37970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379708u;
    // 0x37970c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379708u, 0x379710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379710u;
label_379710:
    // 0x379710: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x379710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_379714:
    // 0x379714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x379714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x379718: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379718u;
    {
        const bool branch_taken_0x379718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379718u;
        // 0x37971c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379718) {
            ctx->pc = 0x37973Cu;
            goto label_37973c;
        }
    }
    ctx->pc = 0x379720u;
    // 0x379720: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379720u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379724: 0x24e7b460  addiu       $a3, $a3, -0x4BA0
    ctx->pc = 0x379724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947936));
    // 0x379728: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37972c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37972Cu;
    SET_GPR_U32(ctx, 31, 0x379734u);
    ctx->pc = 0x379730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37972Cu;
    // 0x379730: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37972Cu, 0x379734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379734u;
label_379734:
    // 0x379734: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379734u;
    {
        const bool branch_taken_0x379734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379734u;
        // 0x379738: 0x82280026  lb          $t0, 0x26($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379734) {
            ctx->pc = 0x379758u;
            goto label_379758;
        }
    }
    ctx->pc = 0x37973Cu;
label_37973c:
    // 0x37973c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37973cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379740: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379740u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379744: 0x24e7b478  addiu       $a3, $a3, -0x4B88
    ctx->pc = 0x379744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947960));
    // 0x379748: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x379748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37974c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37974Cu;
    SET_GPR_U32(ctx, 31, 0x379754u);
    ctx->pc = 0x379750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37974Cu;
    // 0x379750: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37974Cu, 0x379754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379754u;
label_379754:
    // 0x379754: 0x82280026  lb          $t0, 0x26($s1)
    ctx->pc = 0x379754u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_379758:
    // 0x379758: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37975c: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37975Cu;
    {
        const bool branch_taken_0x37975c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x379760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37975Cu;
        // 0x379760: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37975c) {
            ctx->pc = 0x379784u;
            goto label_379784;
        }
    }
    ctx->pc = 0x379764u;
    // 0x379764: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379768: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379768u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x37976c: 0x24e7b388  addiu       $a3, $a3, -0x4C78
    ctx->pc = 0x37976cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947720));
    // 0x379770: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x379770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x379774: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379774u;
    SET_GPR_U32(ctx, 31, 0x37977Cu);
    ctx->pc = 0x379778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379774u;
    // 0x379778: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379774u, 0x37977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37977Cu;
label_37977c:
    // 0x37977c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37977Cu;
    {
        const bool branch_taken_0x37977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37977Cu;
        // 0x379780: 0x128403  sra         $s0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37977c) {
            ctx->pc = 0x37979Cu;
            goto label_37979c;
        }
    }
    ctx->pc = 0x379784u;
label_379784:
    // 0x379784: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379784u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379788: 0x24e7b3a0  addiu       $a3, $a3, -0x4C60
    ctx->pc = 0x379788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947744));
    // 0x37978c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37978cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x379790: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379790u;
    SET_GPR_U32(ctx, 31, 0x379798u);
    ctx->pc = 0x379794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379790u;
    // 0x379794: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379790u, 0x379798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379798u;
label_379798:
    // 0x379798: 0x128403  sra         $s0, $s2, 16
    ctx->pc = 0x379798u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
label_37979c:
    // 0x37979c: 0x82280028  lb          $t0, 0x28($s1)
    ctx->pc = 0x37979cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3797a0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3797a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3797a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3797a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797a8: 0x24e7b560  addiu       $a3, $a3, -0x4AA0
    ctx->pc = 0x3797a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948192));
    // 0x3797ac: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3797acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3797b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3797B0u;
    SET_GPR_U32(ctx, 31, 0x3797B8u);
    ctx->pc = 0x3797B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797B0u;
    // 0x3797b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3797B0u, 0x3797B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797B8u;
label_3797b8:
    // 0x3797b8: 0x82280029  lb          $t0, 0x29($s1)
    ctx->pc = 0x3797b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x3797bc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3797bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3797c0: 0x24e7b578  addiu       $a3, $a3, -0x4A88
    ctx->pc = 0x3797c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948216));
    // 0x3797c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3797c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3797c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3797cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3797CCu;
    SET_GPR_U32(ctx, 31, 0x3797D4u);
    ctx->pc = 0x3797D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797CCu;
    // 0x3797d0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3797CCu, 0x3797D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797D4u;
label_3797d4:
    // 0x3797d4: 0x8228002a  lb          $t0, 0x2A($s1)
    ctx->pc = 0x3797d4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x3797d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3797d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3797dc: 0x24e7b590  addiu       $a3, $a3, -0x4A70
    ctx->pc = 0x3797dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948240));
    // 0x3797e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3797e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797e4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3797e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3797e8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3797E8u;
    SET_GPR_U32(ctx, 31, 0x3797F0u);
    ctx->pc = 0x3797ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3797E8u;
    // 0x3797ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3797E8u, 0x3797F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3797F0u;
label_3797f0:
    // 0x3797f0: 0x8228002b  lb          $t0, 0x2B($s1)
    ctx->pc = 0x3797f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x3797f4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3797f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3797f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3797f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3797fc: 0x24e7b5a8  addiu       $a3, $a3, -0x4A58
    ctx->pc = 0x3797fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948264));
    // 0x379800: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x379800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x379804: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379804u;
    SET_GPR_U32(ctx, 31, 0x37980Cu);
    ctx->pc = 0x379808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379804u;
    // 0x379808: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379804u, 0x37980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37980Cu;
label_37980c:
    // 0x37980c: 0xc0de60e  jal         func_379838
    ctx->pc = 0x37980Cu;
    SET_GPR_U32(ctx, 31, 0x379814u);
    ctx->pc = 0x379810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37980Cu;
    // 0x379810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379838u, 0x37980Cu, 0x379814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379814u;
label_379814:
    // 0x379814: 0xc0de644  jal         func_379910
    ctx->pc = 0x379814u;
    SET_GPR_U32(ctx, 31, 0x37981Cu);
    ctx->pc = 0x379818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379814u;
    // 0x379818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379910u, 0x379814u, 0x37981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37981Cu;
label_37981c:
    // 0x37981c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37981cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_379820:
    // 0x379820: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x379820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379828: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x379828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37982c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379830: 0x3e00008  jr          $ra
    ctx->pc = 0x379830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379830u;
        // 0x379834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379838u;
}
