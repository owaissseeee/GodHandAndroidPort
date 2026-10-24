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

// Function: func_002B34D8
// Address: 0x2b34d8 - 0x2b39b0
void func_002B34D8_0x2b34d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B34D8_0x2b34d8");
#endif

    switch (ctx->pc) {
        case 0x2b3754u: goto label_2b3754;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3774u: goto label_2b3774;
        case 0x2b3784u: goto label_2b3784;
        case 0x2b3794u: goto label_2b3794;
        case 0x2b37a4u: goto label_2b37a4;
        case 0x2b37b4u: goto label_2b37b4;
        case 0x2b37c4u: goto label_2b37c4;
        case 0x2b37d4u: goto label_2b37d4;
        case 0x2b37e4u: goto label_2b37e4;
        case 0x2b37f4u: goto label_2b37f4;
        case 0x2b3804u: goto label_2b3804;
        case 0x2b3814u: goto label_2b3814;
        case 0x2b3834u: goto label_2b3834;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3984u: goto label_2b3984;
        case 0x2b3994u: goto label_2b3994;
        case 0x2b39a4u: goto label_2b39a4;
        default: break;
    }

    ctx->pc = 0x2b34d8u;

    // 0x2b34d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b34dc: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x2b34dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x2b34e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b34e4: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2b34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b34e8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b34e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b34ec: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b34ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b34f0: 0x106500ee  beq         $v1, $a1, . + 4 + (0xEE << 2)
    ctx->pc = 0x2B34F0u;
    {
        const bool branch_taken_0x2b34f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34F0u;
        // 0x2b34f4: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34f0) {
            ctx->pc = 0x2B38ACu;
            goto label_2b38ac;
        }
    }
    ctx->pc = 0x2B34F8u;
    // 0x2b34f8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B34F8u;
    {
        const bool branch_taken_0x2b34f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34F8u;
        // 0x2b34fc: 0x3402d600  ori         $v0, $zero, 0xD600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54784);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34f8) {
            ctx->pc = 0x2B3624u;
            goto label_2b3624;
        }
    }
    ctx->pc = 0x2B3500u;
    // 0x2b3500: 0x34028e00  ori         $v0, $zero, 0x8E00
    ctx->pc = 0x2b3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
    // 0x2b3504: 0x10620119  beq         $v1, $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x2B3504u;
    {
        const bool branch_taken_0x2b3504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3504u;
        // 0x2b3508: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3504) {
            ctx->pc = 0x2B396Cu;
            goto label_2b396c;
        }
    }
    ctx->pc = 0x2B350Cu;
    // 0x2b350c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B350Cu;
    {
        const bool branch_taken_0x2b350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B350Cu;
        // 0x2b3510: 0x3402a300  ori         $v0, $zero, 0xA300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41728);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b350c) {
            ctx->pc = 0x2B35A4u;
            goto label_2b35a4;
        }
    }
    ctx->pc = 0x2B3514u;
    // 0x2b3514: 0x34028500  ori         $v0, $zero, 0x8500
    ctx->pc = 0x2b3514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2b3518: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2B3518u;
    {
        const bool branch_taken_0x2b3518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3518u;
        // 0x2b351c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3518) {
            ctx->pc = 0x2B378Cu;
            goto label_2b378c;
        }
    }
    ctx->pc = 0x2B3520u;
    // 0x2b3520: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3520u;
    {
        const bool branch_taken_0x2b3520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3520u;
        // 0x2b3524: 0x34028900  ori         $v0, $zero, 0x8900 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3520) {
            ctx->pc = 0x2B3568u;
            goto label_2b3568;
        }
    }
    ctx->pc = 0x2B3528u;
    // 0x2b3528: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x2b3528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2b352c: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2B352Cu;
    {
        const bool branch_taken_0x2b352c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B352Cu;
        // 0x2b3530: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b352c) {
            ctx->pc = 0x2B375Cu;
            goto label_2b375c;
        }
    }
    ctx->pc = 0x2B3534u;
    // 0x2b3534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3534u;
    {
        const bool branch_taken_0x2b3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3534u;
        // 0x2b3538: 0x34028200  ori         $v0, $zero, 0x8200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3534) {
            ctx->pc = 0x2B3550u;
            goto label_2b3550;
        }
    }
    ctx->pc = 0x2B353Cu;
    // 0x2b353c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b3540: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2B3540u;
    {
        const bool branch_taken_0x2b3540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3540u;
        // 0x2b3544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3540) {
            ctx->pc = 0x2B374Cu;
            goto label_2b374c;
        }
    }
    ctx->pc = 0x2B3548u;
    // 0x2b3548: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2B3548u;
    {
        const bool branch_taken_0x2b3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3548u;
        // 0x2b354c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3548) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B3550u;
label_2b3550:
    // 0x2b3550: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2B3550u;
    {
        const bool branch_taken_0x2b3550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3550u;
        // 0x2b3554: 0x34028300  ori         $v0, $zero, 0x8300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3550) {
            ctx->pc = 0x2B376Cu;
            goto label_2b376c;
        }
    }
    ctx->pc = 0x2B3558u;
    // 0x2b3558: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2B3558u;
    {
        const bool branch_taken_0x2b3558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3558u;
        // 0x2b355c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3558) {
            ctx->pc = 0x2B377Cu;
            goto label_2b377c;
        }
    }
    ctx->pc = 0x2B3560u;
    // 0x2b3560: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x2B3560u;
    {
        const bool branch_taken_0x2b3560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3560u;
        // 0x2b3564: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3560) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B3568u;
label_2b3568:
    // 0x2b3568: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2B3568u;
    {
        const bool branch_taken_0x2b3568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3568u;
        // 0x2b356c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3568) {
            ctx->pc = 0x2B37BCu;
            goto label_2b37bc;
        }
    }
    ctx->pc = 0x2B3570u;
    // 0x2b3570: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3570u;
    {
        const bool branch_taken_0x2b3570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3570u;
        // 0x2b3574: 0x34028b00  ori         $v0, $zero, 0x8B00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35584);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3570) {
            ctx->pc = 0x2B358Cu;
            goto label_2b358c;
        }
    }
    ctx->pc = 0x2B3578u;
    // 0x2b3578: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x2b3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x2b357c: 0x106200db  beq         $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2B357Cu;
    {
        const bool branch_taken_0x2b357c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B357Cu;
        // 0x2b3580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b357c) {
            ctx->pc = 0x2B38ECu;
            goto label_2b38ec;
        }
    }
    ctx->pc = 0x2B3584u;
    // 0x2b3584: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2B3584u;
    {
        const bool branch_taken_0x2b3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3584u;
        // 0x2b3588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3584) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B358Cu;
label_2b358c:
    // 0x2b358c: 0x106200db  beq         $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2B358Cu;
    {
        const bool branch_taken_0x2b358c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B358Cu;
        // 0x2b3590: 0x34028c00  ori         $v0, $zero, 0x8C00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b358c) {
            ctx->pc = 0x2B38FCu;
            goto label_2b38fc;
        }
    }
    ctx->pc = 0x2B3594u;
    // 0x2b3594: 0x106200f1  beq         $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x2B3594u;
    {
        const bool branch_taken_0x2b3594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3594u;
        // 0x2b3598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3594) {
            ctx->pc = 0x2B395Cu;
            goto label_2b395c;
        }
    }
    ctx->pc = 0x2B359Cu;
    // 0x2b359c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x2B359Cu;
    {
        const bool branch_taken_0x2b359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B359Cu;
        // 0x2b35a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b359c) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B35A4u;
label_2b35a4:
    // 0x2b35a4: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2B35A4u;
    {
        const bool branch_taken_0x2b35a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35A4u;
        // 0x2b35a8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35a4) {
            ctx->pc = 0x2B380Cu;
            goto label_2b380c;
        }
    }
    ctx->pc = 0x2B35ACu;
    // 0x2b35ac: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B35ACu;
    {
        const bool branch_taken_0x2b35ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35ACu;
        // 0x2b35b0: 0x3402a500  ori         $v0, $zero, 0xA500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35ac) {
            ctx->pc = 0x2B35F4u;
            goto label_2b35f4;
        }
    }
    ctx->pc = 0x2B35B4u;
    // 0x2b35b4: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x2b35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x2b35b8: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2B35B8u;
    {
        const bool branch_taken_0x2b35b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35B8u;
        // 0x2b35bc: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35b8) {
            ctx->pc = 0x2B37CCu;
            goto label_2b37cc;
        }
    }
    ctx->pc = 0x2B35C0u;
    // 0x2b35c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B35C0u;
    {
        const bool branch_taken_0x2b35c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35C0u;
        // 0x2b35c4: 0x3402a100  ori         $v0, $zero, 0xA100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35c0) {
            ctx->pc = 0x2B35DCu;
            goto label_2b35dc;
        }
    }
    ctx->pc = 0x2B35C8u;
    // 0x2b35c8: 0x34028f00  ori         $v0, $zero, 0x8F00
    ctx->pc = 0x2b35c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36608);
    // 0x2b35cc: 0x106200eb  beq         $v1, $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x2B35CCu;
    {
        const bool branch_taken_0x2b35cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35CCu;
        // 0x2b35d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35cc) {
            ctx->pc = 0x2B397Cu;
            goto label_2b397c;
        }
    }
    ctx->pc = 0x2B35D4u;
    // 0x2b35d4: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x2B35D4u;
    {
        const bool branch_taken_0x2b35d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35D4u;
        // 0x2b35d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35d4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B35DCu;
label_2b35dc:
    // 0x2b35dc: 0x10620083  beq         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2B35DCu;
    {
        const bool branch_taken_0x2b35dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35DCu;
        // 0x2b35e0: 0x3402a200  ori         $v0, $zero, 0xA200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35dc) {
            ctx->pc = 0x2B37ECu;
            goto label_2b37ec;
        }
    }
    ctx->pc = 0x2B35E4u;
    // 0x2b35e4: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2B35E4u;
    {
        const bool branch_taken_0x2b35e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35E4u;
        // 0x2b35e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35e4) {
            ctx->pc = 0x2B37FCu;
            goto label_2b37fc;
        }
    }
    ctx->pc = 0x2B35ECu;
    // 0x2b35ec: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2B35ECu;
    {
        const bool branch_taken_0x2b35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35ECu;
        // 0x2b35f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35ec) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B35F4u;
label_2b35f4:
    // 0x2b35f4: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2B35F4u;
    {
        const bool branch_taken_0x2b35f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35F4u;
        // 0x2b35f8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35f4) {
            ctx->pc = 0x2B383Cu;
            goto label_2b383c;
        }
    }
    ctx->pc = 0x2B35FCu;
    // 0x2b35fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B35FCu;
    {
        const bool branch_taken_0x2b35fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B35FCu;
        // 0x2b3600: 0x3402a600  ori         $v0, $zero, 0xA600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42496);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b35fc) {
            ctx->pc = 0x2B360Cu;
            goto label_2b360c;
        }
    }
    ctx->pc = 0x2B3604u;
    // 0x2b3604: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2B3604u;
    {
        const bool branch_taken_0x2b3604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3604u;
        // 0x2b3608: 0x3402a400  ori         $v0, $zero, 0xA400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41984);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3604) {
            ctx->pc = 0x2B381Cu;
            goto label_2b381c;
        }
    }
    ctx->pc = 0x2B360Cu;
label_2b360c:
    // 0x2b360c: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2B360Cu;
    {
        const bool branch_taken_0x2b360c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B360Cu;
        // 0x2b3610: 0x3402a700  ori         $v0, $zero, 0xA700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42752);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b360c) {
            ctx->pc = 0x2B379Cu;
            goto label_2b379c;
        }
    }
    ctx->pc = 0x2B3614u;
    // 0x2b3614: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2B3614u;
    {
        const bool branch_taken_0x2b3614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3614u;
        // 0x2b3618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3614) {
            ctx->pc = 0x2B37ACu;
            goto label_2b37ac;
        }
    }
    ctx->pc = 0x2B361Cu;
    // 0x2b361c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x2B361Cu;
    {
        const bool branch_taken_0x2b361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B361Cu;
        // 0x2b3620: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b361c) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B3624u;
label_2b3624:
    // 0x2b3624: 0x106200c1  beq         $v1, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2B3624u;
    {
        const bool branch_taken_0x2b3624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3624u;
        // 0x2b3628: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3624) {
            ctx->pc = 0x2B392Cu;
            goto label_2b392c;
        }
    }
    ctx->pc = 0x2B362Cu;
    // 0x2b362c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B362Cu;
    {
        const bool branch_taken_0x2b362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B362Cu;
        // 0x2b3630: 0x3402e100  ori         $v0, $zero, 0xE100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b362c) {
            ctx->pc = 0x2B36B8u;
            goto label_2b36b8;
        }
    }
    ctx->pc = 0x2B3634u;
    // 0x2b3634: 0x3402d000  ori         $v0, $zero, 0xD000
    ctx->pc = 0x2b3634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53248);
    // 0x2b3638: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2B3638u;
    {
        const bool branch_taken_0x2b3638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3638u;
        // 0x2b363c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3638) {
            ctx->pc = 0x2B384Cu;
            goto label_2b384c;
        }
    }
    ctx->pc = 0x2B3640u;
    // 0x2b3640: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B3640u;
    {
        const bool branch_taken_0x2b3640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3640u;
        // 0x2b3644: 0x3402d300  ori         $v0, $zero, 0xD300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54016);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3640) {
            ctx->pc = 0x2B367Cu;
            goto label_2b367c;
        }
    }
    ctx->pc = 0x2B3648u;
    // 0x2b3648: 0x3402aa00  ori         $v0, $zero, 0xAA00
    ctx->pc = 0x2b3648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43520);
    // 0x2b364c: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2B364Cu;
    {
        const bool branch_taken_0x2b364c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B364Cu;
        // 0x2b3650: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b364c) {
            ctx->pc = 0x2B3824u;
            goto label_2b3824;
        }
    }
    ctx->pc = 0x2B3654u;
    // 0x2b3654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3654u;
    {
        const bool branch_taken_0x2b3654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3654u;
        // 0x2b3658: 0x3402ab00  ori         $v0, $zero, 0xAB00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3654) {
            ctx->pc = 0x2B3664u;
            goto label_2b3664;
        }
    }
    ctx->pc = 0x2B365Cu;
    // 0x2b365c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2B365Cu;
    {
        const bool branch_taken_0x2b365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B365Cu;
        // 0x2b3660: 0x3402a900  ori         $v0, $zero, 0xA900 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b365c) {
            ctx->pc = 0x2B381Cu;
            goto label_2b381c;
        }
    }
    ctx->pc = 0x2B3664u;
label_2b3664:
    // 0x2b3664: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2B3664u;
    {
        const bool branch_taken_0x2b3664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3664u;
        // 0x2b3668: 0x3402ac00  ori         $v0, $zero, 0xAC00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44032);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3664) {
            ctx->pc = 0x2B382Cu;
            goto label_2b382c;
        }
    }
    ctx->pc = 0x2B366Cu;
    // 0x2b366c: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2B366Cu;
    {
        const bool branch_taken_0x2b366c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B366Cu;
        // 0x2b3670: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b366c) {
            ctx->pc = 0x2B391Cu;
            goto label_2b391c;
        }
    }
    ctx->pc = 0x2B3674u;
    // 0x2b3674: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x2B3674u;
    {
        const bool branch_taken_0x2b3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3674u;
        // 0x2b3678: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3674) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B367Cu;
label_2b367c:
    // 0x2b367c: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2B367Cu;
    {
        const bool branch_taken_0x2b367c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B367Cu;
        // 0x2b3680: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b367c) {
            ctx->pc = 0x2B38CCu;
            goto label_2b38cc;
        }
    }
    ctx->pc = 0x2B3684u;
    // 0x2b3684: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3684u;
    {
        const bool branch_taken_0x2b3684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3684u;
        // 0x2b3688: 0x3402d400  ori         $v0, $zero, 0xD400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54272);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3684) {
            ctx->pc = 0x2B36A0u;
            goto label_2b36a0;
        }
    }
    ctx->pc = 0x2B368Cu;
    // 0x2b368c: 0x3402d100  ori         $v0, $zero, 0xD100
    ctx->pc = 0x2b368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53504);
    // 0x2b3690: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2B3690u;
    {
        const bool branch_taken_0x2b3690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3690u;
        // 0x2b3694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3690) {
            ctx->pc = 0x2B38BCu;
            goto label_2b38bc;
        }
    }
    ctx->pc = 0x2B3698u;
    // 0x2b3698: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2B3698u;
    {
        const bool branch_taken_0x2b3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3698u;
        // 0x2b369c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3698) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B36A0u;
label_2b36a0:
    // 0x2b36a0: 0x1062008e  beq         $v1, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2B36A0u;
    {
        const bool branch_taken_0x2b36a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36A0u;
        // 0x2b36a4: 0x3402d500  ori         $v0, $zero, 0xD500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36a0) {
            ctx->pc = 0x2B38DCu;
            goto label_2b38dc;
        }
    }
    ctx->pc = 0x2B36A8u;
    // 0x2b36a8: 0x10620098  beq         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2B36A8u;
    {
        const bool branch_taken_0x2b36a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36A8u;
        // 0x2b36ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36a8) {
            ctx->pc = 0x2B390Cu;
            goto label_2b390c;
        }
    }
    ctx->pc = 0x2B36B0u;
    // 0x2b36b0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2B36B0u;
    {
        const bool branch_taken_0x2b36b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B0u;
        // 0x2b36b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36b0) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B36B8u;
label_2b36b8:
    // 0x2b36b8: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2B36B8u;
    {
        const bool branch_taken_0x2b36b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B8u;
        // 0x2b36bc: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36b8) {
            ctx->pc = 0x2B385Cu;
            goto label_2b385c;
        }
    }
    ctx->pc = 0x2B36C0u;
    // 0x2b36c0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B36C0u;
    {
        const bool branch_taken_0x2b36c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C0u;
        // 0x2b36c4: 0x3402e500  ori         $v0, $zero, 0xE500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58624);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36c0) {
            ctx->pc = 0x2B3708u;
            goto label_2b3708;
        }
    }
    ctx->pc = 0x2B36C8u;
    // 0x2b36c8: 0x3402d800  ori         $v0, $zero, 0xD800
    ctx->pc = 0x2b36c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55296);
    // 0x2b36cc: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2B36CCu;
    {
        const bool branch_taken_0x2b36cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36CCu;
        // 0x2b36d0: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36cc) {
            ctx->pc = 0x2B394Cu;
            goto label_2b394c;
        }
    }
    ctx->pc = 0x2B36D4u;
    // 0x2b36d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B36D4u;
    {
        const bool branch_taken_0x2b36d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36D4u;
        // 0x2b36d8: 0x3402da00  ori         $v0, $zero, 0xDA00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55808);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36d4) {
            ctx->pc = 0x2B36F0u;
            goto label_2b36f0;
        }
    }
    ctx->pc = 0x2B36DCu;
    // 0x2b36dc: 0x3402d700  ori         $v0, $zero, 0xD700
    ctx->pc = 0x2b36dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55040);
    // 0x2b36e0: 0x10620096  beq         $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B36E0u;
    {
        const bool branch_taken_0x2b36e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36E0u;
        // 0x2b36e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36e0) {
            ctx->pc = 0x2B393Cu;
            goto label_2b393c;
        }
    }
    ctx->pc = 0x2B36E8u;
    // 0x2b36e8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2B36E8u;
    {
        const bool branch_taken_0x2b36e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36E8u;
        // 0x2b36ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36e8) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B36F0u;
label_2b36f0:
    // 0x2b36f0: 0x106200a6  beq         $v1, $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B36F0u;
    {
        const bool branch_taken_0x2b36f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F0u;
        // 0x2b36f4: 0x3402e000  ori         $v0, $zero, 0xE000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f0) {
            ctx->pc = 0x2B398Cu;
            goto label_2b398c;
        }
    }
    ctx->pc = 0x2B36F8u;
    // 0x2b36f8: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2B36F8u;
    {
        const bool branch_taken_0x2b36f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F8u;
        // 0x2b36fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f8) {
            ctx->pc = 0x2B386Cu;
            goto label_2b386c;
        }
    }
    ctx->pc = 0x2B3700u;
    // 0x2b3700: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2B3700u;
    {
        const bool branch_taken_0x2b3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3700u;
        // 0x2b3704: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3700) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B3708u;
label_2b3708:
    // 0x2b3708: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2B3708u;
    {
        const bool branch_taken_0x2b3708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3708u;
        // 0x2b370c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3708) {
            ctx->pc = 0x2B389Cu;
            goto label_2b389c;
        }
    }
    ctx->pc = 0x2B3710u;
    // 0x2b3710: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3710u;
    {
        const bool branch_taken_0x2b3710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3710u;
        // 0x2b3714: 0x3402e700  ori         $v0, $zero, 0xE700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3710) {
            ctx->pc = 0x2B3734u;
            goto label_2b3734;
        }
    }
    ctx->pc = 0x2B3718u;
    // 0x2b3718: 0x3402e200  ori         $v0, $zero, 0xE200
    ctx->pc = 0x2b3718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
    // 0x2b371c: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2B371Cu;
    {
        const bool branch_taken_0x2b371c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B371Cu;
        // 0x2b3720: 0x3402e400  ori         $v0, $zero, 0xE400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b371c) {
            ctx->pc = 0x2B387Cu;
            goto label_2b387c;
        }
    }
    ctx->pc = 0x2B3724u;
    // 0x2b3724: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2B3724u;
    {
        const bool branch_taken_0x2b3724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3724u;
        // 0x2b3728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3724) {
            ctx->pc = 0x2B388Cu;
            goto label_2b388c;
        }
    }
    ctx->pc = 0x2B372Cu;
    // 0x2b372c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2B372Cu;
    {
        const bool branch_taken_0x2b372c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B372Cu;
        // 0x2b3730: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b372c) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B3734u;
label_2b3734:
    // 0x2b3734: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B3734u;
    {
        const bool branch_taken_0x2b3734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3734u;
        // 0x2b3738: 0x3402e800  ori         $v0, $zero, 0xE800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3734) {
            ctx->pc = 0x2B37DCu;
            goto label_2b37dc;
        }
    }
    ctx->pc = 0x2B373Cu;
    // 0x2b373c: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2B373Cu;
    {
        const bool branch_taken_0x2b373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B373Cu;
        // 0x2b3740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b373c) {
            ctx->pc = 0x2B399Cu;
            goto label_2b399c;
        }
    }
    ctx->pc = 0x2B3744u;
    // 0x2b3744: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2B3744u;
    {
        const bool branch_taken_0x2b3744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3744u;
        // 0x2b3748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3744) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B374Cu;
label_2b374c:
    // 0x2b374c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B374Cu;
    SET_GPR_U32(ctx, 31, 0x2B3754u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B374Cu, 0x2B3754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3754u;
label_2b3754:
    // 0x2b3754: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2B3754u;
    {
        const bool branch_taken_0x2b3754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3754u;
        // 0x2b3758: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3754) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B375Cu;
label_2b375c:
    // 0x2b375c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B375Cu;
    SET_GPR_U32(ctx, 31, 0x2B3764u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B375Cu, 0x2B3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3764u;
label_2b3764:
    // 0x2b3764: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2B3764u;
    {
        const bool branch_taken_0x2b3764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3764u;
        // 0x2b3768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3764) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B376Cu;
label_2b376c:
    // 0x2b376c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B376Cu;
    SET_GPR_U32(ctx, 31, 0x2B3774u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B376Cu, 0x2B3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3774u;
label_2b3774:
    // 0x2b3774: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2B3774u;
    {
        const bool branch_taken_0x2b3774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3774u;
        // 0x2b3778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3774) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B377Cu;
label_2b377c:
    // 0x2b377c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B377Cu;
    SET_GPR_U32(ctx, 31, 0x2B3784u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B377Cu, 0x2B3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3784u;
label_2b3784:
    // 0x2b3784: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2B3784u;
    {
        const bool branch_taken_0x2b3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3784u;
        // 0x2b3788: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3784) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B378Cu;
label_2b378c:
    // 0x2b378c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B378Cu;
    SET_GPR_U32(ctx, 31, 0x2B3794u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B378Cu, 0x2B3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3794u;
label_2b3794:
    // 0x2b3794: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2B3794u;
    {
        const bool branch_taken_0x2b3794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3794u;
        // 0x2b3798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3794) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B379Cu;
label_2b379c:
    // 0x2b379c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B379Cu;
    SET_GPR_U32(ctx, 31, 0x2B37A4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B379Cu, 0x2B37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37A4u;
label_2b37a4:
    // 0x2b37a4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2B37A4u;
    {
        const bool branch_taken_0x2b37a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37A4u;
        // 0x2b37a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37a4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37ACu;
label_2b37ac:
    // 0x2b37ac: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B37ACu;
    SET_GPR_U32(ctx, 31, 0x2B37B4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B37ACu, 0x2B37B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37B4u;
label_2b37b4:
    // 0x2b37b4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2B37B4u;
    {
        const bool branch_taken_0x2b37b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37B4u;
        // 0x2b37b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37b4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37BCu;
label_2b37bc:
    // 0x2b37bc: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B37BCu;
    SET_GPR_U32(ctx, 31, 0x2B37C4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B37BCu, 0x2B37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37C4u;
label_2b37c4:
    // 0x2b37c4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2B37C4u;
    {
        const bool branch_taken_0x2b37c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37C4u;
        // 0x2b37c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37c4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37CCu;
label_2b37cc:
    // 0x2b37cc: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B37CCu;
    SET_GPR_U32(ctx, 31, 0x2B37D4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B37CCu, 0x2B37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37D4u;
label_2b37d4:
    // 0x2b37d4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2B37D4u;
    {
        const bool branch_taken_0x2b37d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37D4u;
        // 0x2b37d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37d4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37DCu;
label_2b37dc:
    // 0x2b37dc: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B37DCu;
    SET_GPR_U32(ctx, 31, 0x2B37E4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B37DCu, 0x2B37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37E4u;
label_2b37e4:
    // 0x2b37e4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2B37E4u;
    {
        const bool branch_taken_0x2b37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37E4u;
        // 0x2b37e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37e4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37ECu;
label_2b37ec:
    // 0x2b37ec: 0xc0ace8e  jal         func_2B3A38
    ctx->pc = 0x2B37ECu;
    SET_GPR_U32(ctx, 31, 0x2B37F4u);
    ctx->pc = 0x2B3A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A38u, 0x2B37ECu, 0x2B37F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37F4u;
label_2b37f4:
    // 0x2b37f4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2B37F4u;
    {
        const bool branch_taken_0x2b37f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37F4u;
        // 0x2b37f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37f4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B37FCu;
label_2b37fc:
    // 0x2b37fc: 0xc0acbce  jal         func_2B2F38
    ctx->pc = 0x2B37FCu;
    SET_GPR_U32(ctx, 31, 0x2B3804u);
    ctx->pc = 0x2B2F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F38u, 0x2B37FCu, 0x2B3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3804u;
label_2b3804:
    // 0x2b3804: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2B3804u;
    {
        const bool branch_taken_0x2b3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3804u;
        // 0x2b3808: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3804) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B380Cu;
label_2b380c:
    // 0x2b380c: 0xc0aceb4  jal         func_2B3AD0
    ctx->pc = 0x2B380Cu;
    SET_GPR_U32(ctx, 31, 0x2B3814u);
    ctx->pc = 0x2B3AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3AD0u, 0x2B380Cu, 0x2B3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3814u;
label_2b3814:
    // 0x2b3814: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2B3814u;
    {
        const bool branch_taken_0x2b3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3814u;
        // 0x2b3818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3814) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B381Cu;
label_2b381c:
    // 0x2b381c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B381Cu;
    {
        const bool branch_taken_0x2b381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B381Cu;
        // 0x2b3820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b381c) {
            ctx->pc = 0x2B39A4u;
            goto label_2b39a4;
        }
    }
    ctx->pc = 0x2B3824u;
label_2b3824:
    // 0x2b3824: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2B3824u;
    {
        const bool branch_taken_0x2b3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3824u;
        // 0x2b3828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3824) {
            ctx->pc = 0x2B39A4u;
            goto label_2b39a4;
        }
    }
    ctx->pc = 0x2B382Cu;
label_2b382c:
    // 0x2b382c: 0xc0acef8  jal         func_2B3BE0
    ctx->pc = 0x2B382Cu;
    SET_GPR_U32(ctx, 31, 0x2B3834u);
    ctx->pc = 0x2B3BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3BE0u, 0x2B382Cu, 0x2B3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3834u;
label_2b3834:
    // 0x2b3834: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2B3834u;
    {
        const bool branch_taken_0x2b3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3834u;
        // 0x2b3838: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3834) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B383Cu;
label_2b383c:
    // 0x2b383c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B383Cu;
    SET_GPR_U32(ctx, 31, 0x2B3844u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B383Cu, 0x2B3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3844u;
label_2b3844:
    // 0x2b3844: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2B3844u;
    {
        const bool branch_taken_0x2b3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3844u;
        // 0x2b3848: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3844) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B384Cu;
label_2b384c:
    // 0x2b384c: 0xc0ace6c  jal         func_2B39B0
    ctx->pc = 0x2B384Cu;
    SET_GPR_U32(ctx, 31, 0x2B3854u);
    ctx->pc = 0x2B39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39B0u, 0x2B384Cu, 0x2B3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3854u;
label_2b3854:
    // 0x2b3854: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2B3854u;
    {
        const bool branch_taken_0x2b3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3854u;
        // 0x2b3858: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3854) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B385Cu;
label_2b385c:
    // 0x2b385c: 0xc0acbda  jal         func_2B2F68
    ctx->pc = 0x2B385Cu;
    SET_GPR_U32(ctx, 31, 0x2B3864u);
    ctx->pc = 0x2B2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F68u, 0x2B385Cu, 0x2B3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3864u;
label_2b3864:
    // 0x2b3864: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2B3864u;
    {
        const bool branch_taken_0x2b3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3864u;
        // 0x2b3868: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3864) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B386Cu;
label_2b386c:
    // 0x2b386c: 0xc0acbdc  jal         func_2B2F70
    ctx->pc = 0x2B386Cu;
    SET_GPR_U32(ctx, 31, 0x2B3874u);
    ctx->pc = 0x2B2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F70u, 0x2B386Cu, 0x2B3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3874u;
label_2b3874:
    // 0x2b3874: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2B3874u;
    {
        const bool branch_taken_0x2b3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3874u;
        // 0x2b3878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3874) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B387Cu;
label_2b387c:
    // 0x2b387c: 0xc0acbde  jal         func_2B2F78
    ctx->pc = 0x2B387Cu;
    SET_GPR_U32(ctx, 31, 0x2B3884u);
    ctx->pc = 0x2B2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F78u, 0x2B387Cu, 0x2B3884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3884u;
label_2b3884:
    // 0x2b3884: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2B3884u;
    {
        const bool branch_taken_0x2b3884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3884u;
        // 0x2b3888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3884) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B388Cu;
label_2b388c:
    // 0x2b388c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B388Cu;
    SET_GPR_U32(ctx, 31, 0x2B3894u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B388Cu, 0x2B3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3894u;
label_2b3894:
    // 0x2b3894: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2B3894u;
    {
        const bool branch_taken_0x2b3894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3894u;
        // 0x2b3898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3894) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B389Cu;
label_2b389c:
    // 0x2b389c: 0xc0acedc  jal         func_2B3B70
    ctx->pc = 0x2B389Cu;
    SET_GPR_U32(ctx, 31, 0x2B38A4u);
    ctx->pc = 0x2B3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B70u, 0x2B389Cu, 0x2B38A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38A4u;
label_2b38a4:
    // 0x2b38a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B38A4u;
    {
        const bool branch_taken_0x2b38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38A4u;
        // 0x2b38a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38a4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38ACu;
label_2b38ac:
    // 0x2b38ac: 0xc0aced0  jal         func_2B3B40
    ctx->pc = 0x2B38ACu;
    SET_GPR_U32(ctx, 31, 0x2B38B4u);
    ctx->pc = 0x2B3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B40u, 0x2B38ACu, 0x2B38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38B4u;
label_2b38b4:
    // 0x2b38b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2B38B4u;
    {
        const bool branch_taken_0x2b38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38B4u;
        // 0x2b38b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38b4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38BCu;
label_2b38bc:
    // 0x2b38bc: 0xc0acf08  jal         func_2B3C20
    ctx->pc = 0x2B38BCu;
    SET_GPR_U32(ctx, 31, 0x2B38C4u);
    ctx->pc = 0x2B3C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C20u, 0x2B38BCu, 0x2B38C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38C4u;
label_2b38c4:
    // 0x2b38c4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B38C4u;
    {
        const bool branch_taken_0x2b38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38C4u;
        // 0x2b38c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38c4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38CCu;
label_2b38cc:
    // 0x2b38cc: 0xc0acbe0  jal         func_2B2F80
    ctx->pc = 0x2B38CCu;
    SET_GPR_U32(ctx, 31, 0x2B38D4u);
    ctx->pc = 0x2B2F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F80u, 0x2B38CCu, 0x2B38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38D4u;
label_2b38d4:
    // 0x2b38d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B38D4u;
    {
        const bool branch_taken_0x2b38d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38D4u;
        // 0x2b38d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38d4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38DCu;
label_2b38dc:
    // 0x2b38dc: 0xc0acf3e  jal         func_2B3CF8
    ctx->pc = 0x2B38DCu;
    SET_GPR_U32(ctx, 31, 0x2B38E4u);
    ctx->pc = 0x2B3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3CF8u, 0x2B38DCu, 0x2B38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38E4u;
label_2b38e4:
    // 0x2b38e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2B38E4u;
    {
        const bool branch_taken_0x2b38e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E4u;
        // 0x2b38e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38e4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38ECu;
label_2b38ec:
    // 0x2b38ec: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x2B38ECu;
    SET_GPR_U32(ctx, 31, 0x2B38F4u);
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2B38ECu, 0x2B38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38F4u;
label_2b38f4:
    // 0x2b38f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2B38F4u;
    {
        const bool branch_taken_0x2b38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38F4u;
        // 0x2b38f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38f4) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B38FCu;
label_2b38fc:
    // 0x2b38fc: 0xc0acbec  jal         func_2B2FB0
    ctx->pc = 0x2B38FCu;
    SET_GPR_U32(ctx, 31, 0x2B3904u);
    ctx->pc = 0x2B2FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FB0u, 0x2B38FCu, 0x2B3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3904u;
label_2b3904:
    // 0x2b3904: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B3904u;
    {
        const bool branch_taken_0x2b3904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3904u;
        // 0x2b3908: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3904) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B390Cu;
label_2b390c:
    // 0x2b390c: 0xc0acbf4  jal         func_2B2FD0
    ctx->pc = 0x2B390Cu;
    SET_GPR_U32(ctx, 31, 0x2B3914u);
    ctx->pc = 0x2B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FD0u, 0x2B390Cu, 0x2B3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3914u;
label_2b3914:
    // 0x2b3914: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B3914u;
    {
        const bool branch_taken_0x2b3914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3914u;
        // 0x2b3918: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3914) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B391Cu;
label_2b391c:
    // 0x2b391c: 0xc0acbf6  jal         func_2B2FD8
    ctx->pc = 0x2B391Cu;
    SET_GPR_U32(ctx, 31, 0x2B3924u);
    ctx->pc = 0x2B2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FD8u, 0x2B391Cu, 0x2B3924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3924u;
label_2b3924:
    // 0x2b3924: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B3924u;
    {
        const bool branch_taken_0x2b3924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3924u;
        // 0x2b3928: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3924) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B392Cu;
label_2b392c:
    // 0x2b392c: 0xc0acbfc  jal         func_2B2FF0
    ctx->pc = 0x2B392Cu;
    SET_GPR_U32(ctx, 31, 0x2B3934u);
    ctx->pc = 0x2B2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FF0u, 0x2B392Cu, 0x2B3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3934u;
label_2b3934:
    // 0x2b3934: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B3934u;
    {
        const bool branch_taken_0x2b3934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3934u;
        // 0x2b3938: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3934) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B393Cu;
label_2b393c:
    // 0x2b393c: 0xc0acbfe  jal         func_2B2FF8
    ctx->pc = 0x2B393Cu;
    SET_GPR_U32(ctx, 31, 0x2B3944u);
    ctx->pc = 0x2B2FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FF8u, 0x2B393Cu, 0x2B3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3944u;
label_2b3944:
    // 0x2b3944: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B3944u;
    {
        const bool branch_taken_0x2b3944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3944u;
        // 0x2b3948: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3944) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B394Cu;
label_2b394c:
    // 0x2b394c: 0xc0acc00  jal         func_2B3000
    ctx->pc = 0x2B394Cu;
    SET_GPR_U32(ctx, 31, 0x2B3954u);
    ctx->pc = 0x2B3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3000u, 0x2B394Cu, 0x2B3954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3954u;
label_2b3954:
    // 0x2b3954: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B3954u;
    {
        const bool branch_taken_0x2b3954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3954u;
        // 0x2b3958: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3954) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B395Cu;
label_2b395c:
    // 0x2b395c: 0xc0acc02  jal         func_2B3008
    ctx->pc = 0x2B395Cu;
    SET_GPR_U32(ctx, 31, 0x2B3964u);
    ctx->pc = 0x2B3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3008u, 0x2B395Cu, 0x2B3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3964u;
label_2b3964:
    // 0x2b3964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3964u;
    {
        const bool branch_taken_0x2b3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3964u;
        // 0x2b3968: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3964) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B396Cu;
label_2b396c:
    // 0x2b396c: 0xc0acc08  jal         func_2B3020
    ctx->pc = 0x2B396Cu;
    SET_GPR_U32(ctx, 31, 0x2B3974u);
    ctx->pc = 0x2B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3020u, 0x2B396Cu, 0x2B3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3974u;
label_2b3974:
    // 0x2b3974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B3974u;
    {
        const bool branch_taken_0x2b3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3974u;
        // 0x2b3978: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3974) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B397Cu;
label_2b397c:
    // 0x2b397c: 0xc0acc0e  jal         func_2B3038
    ctx->pc = 0x2B397Cu;
    SET_GPR_U32(ctx, 31, 0x2B3984u);
    ctx->pc = 0x2B3038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3038u, 0x2B397Cu, 0x2B3984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3984u;
label_2b3984:
    // 0x2b3984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3984u;
    {
        const bool branch_taken_0x2b3984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3984u;
        // 0x2b3988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3984) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B398Cu;
label_2b398c:
    // 0x2b398c: 0xc0acc14  jal         func_2B3050
    ctx->pc = 0x2B398Cu;
    SET_GPR_U32(ctx, 31, 0x2B3994u);
    ctx->pc = 0x2B3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3050u, 0x2B398Cu, 0x2B3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3994u;
label_2b3994:
    // 0x2b3994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3994u;
    {
        const bool branch_taken_0x2b3994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3994u;
        // 0x2b3998: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3994) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B399Cu;
label_2b399c:
    // 0x2b399c: 0xc0ad1f2  jal         func_2B47C8
    ctx->pc = 0x2B399Cu;
    SET_GPR_U32(ctx, 31, 0x2B39A4u);
    ctx->pc = 0x2B47C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B47C8u, 0x2B399Cu, 0x2B39A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39A4u;
label_2b39a4:
    // 0x2b39a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b39a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b39a8:
    // 0x2b39a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B39A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39A8u;
        // 0x2b39ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B39B0u;
}
