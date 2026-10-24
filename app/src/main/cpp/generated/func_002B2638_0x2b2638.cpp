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

// Function: func_002B2638
// Address: 0x2b2638 - 0x2b2a30
void func_002B2638_0x2b2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2638_0x2b2638");
#endif

    switch (ctx->pc) {
        case 0x2b2868u: goto label_2b2868;
        case 0x2b2878u: goto label_2b2878;
        case 0x2b2888u: goto label_2b2888;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b28a8u: goto label_2b28a8;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b28c8u: goto label_2b28c8;
        case 0x2b28d8u: goto label_2b28d8;
        case 0x2b28f0u: goto label_2b28f0;
        case 0x2b2900u: goto label_2b2900;
        case 0x2b2910u: goto label_2b2910;
        case 0x2b2920u: goto label_2b2920;
        case 0x2b2930u: goto label_2b2930;
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2950u: goto label_2b2950;
        case 0x2b2960u: goto label_2b2960;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b2990u: goto label_2b2990;
        case 0x2b29a0u: goto label_2b29a0;
        case 0x2b29b0u: goto label_2b29b0;
        case 0x2b29c0u: goto label_2b29c0;
        case 0x2b29d0u: goto label_2b29d0;
        case 0x2b29e0u: goto label_2b29e0;
        case 0x2b29f0u: goto label_2b29f0;
        case 0x2b2a00u: goto label_2b2a00;
        case 0x2b2a10u: goto label_2b2a10;
        case 0x2b2a20u: goto label_2b2a20;
        default: break;
    }

    ctx->pc = 0x2b2638u;

    // 0x2b2638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b263c: 0x3405a600  ori         $a1, $zero, 0xA600
    ctx->pc = 0x2b263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42496);
    // 0x2b2640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2644: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2b2644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2648: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2b2648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b264c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b264cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b2650: 0x10650093  beq         $v1, $a1, . + 4 + (0x93 << 2)
    ctx->pc = 0x2B2650u;
    {
        const bool branch_taken_0x2b2650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2650u;
        // 0x2b2654: 0xa3102a  slt         $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2650) {
            ctx->pc = 0x2B28A0u;
            goto label_2b28a0;
        }
    }
    ctx->pc = 0x2B2658u;
    // 0x2b2658: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B2658u;
    {
        const bool branch_taken_0x2b2658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2658u;
        // 0x2b265c: 0x3402d800  ori         $v0, $zero, 0xD800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2658) {
            ctx->pc = 0x2B2754u;
            goto label_2b2754;
        }
    }
    ctx->pc = 0x2B2660u;
    // 0x2b2660: 0x34028a00  ori         $v0, $zero, 0x8A00
    ctx->pc = 0x2b2660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
    // 0x2b2664: 0x1062009a  beq         $v1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x2B2664u;
    {
        const bool branch_taken_0x2b2664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2664u;
        // 0x2b2668: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2664) {
            ctx->pc = 0x2B28D0u;
            goto label_2b28d0;
        }
    }
    ctx->pc = 0x2B266Cu;
    // 0x2b266c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B266Cu;
    {
        const bool branch_taken_0x2b266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B266Cu;
        // 0x2b2670: 0x34028f00  ori         $v0, $zero, 0x8F00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36608);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b266c) {
            ctx->pc = 0x2B26D8u;
            goto label_2b26d8;
        }
    }
    ctx->pc = 0x2B2674u;
    // 0x2b2674: 0x34028300  ori         $v0, $zero, 0x8300
    ctx->pc = 0x2b2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x2b2678: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2B2678u;
    {
        const bool branch_taken_0x2b2678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2678u;
        // 0x2b267c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2678) {
            ctx->pc = 0x2B2880u;
            goto label_2b2880;
        }
    }
    ctx->pc = 0x2B2680u;
    // 0x2b2680: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2680u;
    {
        const bool branch_taken_0x2b2680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2680u;
        // 0x2b2684: 0x34028700  ori         $v0, $zero, 0x8700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2680) {
            ctx->pc = 0x2B26A4u;
            goto label_2b26a4;
        }
    }
    ctx->pc = 0x2B2688u;
    // 0x2b2688: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x2b2688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2b268c: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2B268Cu;
    {
        const bool branch_taken_0x2b268c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B268Cu;
        // 0x2b2690: 0x34028200  ori         $v0, $zero, 0x8200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b268c) {
            ctx->pc = 0x2B2860u;
            goto label_2b2860;
        }
    }
    ctx->pc = 0x2B2694u;
    // 0x2b2694: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2B2694u;
    {
        const bool branch_taken_0x2b2694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2694u;
        // 0x2b2698: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2694) {
            ctx->pc = 0x2B2870u;
            goto label_2b2870;
        }
    }
    ctx->pc = 0x2B269Cu;
    // 0x2b269c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x2B269Cu;
    {
        const bool branch_taken_0x2b269c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B269Cu;
        // 0x2b26a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b269c) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B26A4u;
label_2b26a4:
    // 0x2b26a4: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2B26A4u;
    {
        const bool branch_taken_0x2b26a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26A4u;
        // 0x2b26a8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26a4) {
            ctx->pc = 0x2B28C0u;
            goto label_2b28c0;
        }
    }
    ctx->pc = 0x2B26ACu;
    // 0x2b26ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B26ACu;
    {
        const bool branch_taken_0x2b26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26ACu;
        // 0x2b26b0: 0x34028800  ori         $v0, $zero, 0x8800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26ac) {
            ctx->pc = 0x2B26C8u;
            goto label_2b26c8;
        }
    }
    ctx->pc = 0x2B26B4u;
    // 0x2b26b4: 0x34028500  ori         $v0, $zero, 0x8500
    ctx->pc = 0x2b26b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2b26b8: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2B26B8u;
    {
        const bool branch_taken_0x2b26b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26B8u;
        // 0x2b26bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26b8) {
            ctx->pc = 0x2B2890u;
            goto label_2b2890;
        }
    }
    ctx->pc = 0x2B26C0u;
    // 0x2b26c0: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2B26C0u;
    {
        const bool branch_taken_0x2b26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26C0u;
        // 0x2b26c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26c0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B26C8u;
label_2b26c8:
    // 0x2b26c8: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2B26C8u;
    {
        const bool branch_taken_0x2b26c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26C8u;
        // 0x2b26cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26c8) {
            ctx->pc = 0x2B2958u;
            goto label_2b2958;
        }
    }
    ctx->pc = 0x2B26D0u;
    // 0x2b26d0: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2B26D0u;
    {
        const bool branch_taken_0x2b26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26D0u;
        // 0x2b26d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26d0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B26D8u;
label_2b26d8:
    // 0x2b26d8: 0x106200c7  beq         $v1, $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2B26D8u;
    {
        const bool branch_taken_0x2b26d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26D8u;
        // 0x2b26dc: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26d8) {
            ctx->pc = 0x2B29F8u;
            goto label_2b29f8;
        }
    }
    ctx->pc = 0x2B26E0u;
    // 0x2b26e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B26E0u;
    {
        const bool branch_taken_0x2b26e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E0u;
        // 0x2b26e4: 0x3402a200  ori         $v0, $zero, 0xA200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41472);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26e0) {
            ctx->pc = 0x2B2720u;
            goto label_2b2720;
        }
    }
    ctx->pc = 0x2B26E8u;
    // 0x2b26e8: 0x34028c00  ori         $v0, $zero, 0x8C00
    ctx->pc = 0x2b26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
    // 0x2b26ec: 0x106200b6  beq         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2B26ECu;
    {
        const bool branch_taken_0x2b26ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26ECu;
        // 0x2b26f0: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26ec) {
            ctx->pc = 0x2B29C8u;
            goto label_2b29c8;
        }
    }
    ctx->pc = 0x2B26F4u;
    // 0x2b26f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B26F4u;
    {
        const bool branch_taken_0x2b26f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26F4u;
        // 0x2b26f8: 0x34028e00  ori         $v0, $zero, 0x8E00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b26f4) {
            ctx->pc = 0x2B2710u;
            goto label_2b2710;
        }
    }
    ctx->pc = 0x2B26FCu;
    // 0x2b26fc: 0x34028b00  ori         $v0, $zero, 0x8B00
    ctx->pc = 0x2b26fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35584);
    // 0x2b2700: 0x10620099  beq         $v1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2B2700u;
    {
        const bool branch_taken_0x2b2700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2700u;
        // 0x2b2704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2700) {
            ctx->pc = 0x2B2968u;
            goto label_2b2968;
        }
    }
    ctx->pc = 0x2B2708u;
    // 0x2b2708: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x2B2708u;
    {
        const bool branch_taken_0x2b2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2708u;
        // 0x2b270c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2708) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2710u;
label_2b2710:
    // 0x2b2710: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x2B2710u;
    {
        const bool branch_taken_0x2b2710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2710u;
        // 0x2b2714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2710) {
            ctx->pc = 0x2B29D8u;
            goto label_2b29d8;
        }
    }
    ctx->pc = 0x2B2718u;
    // 0x2b2718: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2B2718u;
    {
        const bool branch_taken_0x2b2718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2718u;
        // 0x2b271c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2718) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2720u;
label_2b2720:
    // 0x2b2720: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2B2720u;
    {
        const bool branch_taken_0x2b2720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2720u;
        // 0x2b2724: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2720) {
            ctx->pc = 0x2B28E8u;
            goto label_2b28e8;
        }
    }
    ctx->pc = 0x2B2728u;
    // 0x2b2728: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2728u;
    {
        const bool branch_taken_0x2b2728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2728u;
        // 0x2b272c: 0x3402a500  ori         $v0, $zero, 0xA500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2728) {
            ctx->pc = 0x2B2744u;
            goto label_2b2744;
        }
    }
    ctx->pc = 0x2B2730u;
    // 0x2b2730: 0x3402a100  ori         $v0, $zero, 0xA100
    ctx->pc = 0x2b2730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41216);
    // 0x2b2734: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2B2734u;
    {
        const bool branch_taken_0x2b2734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2734u;
        // 0x2b2738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2734) {
            ctx->pc = 0x2B28E0u;
            goto label_2b28e0;
        }
    }
    ctx->pc = 0x2B273Cu;
    // 0x2b273c: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2B273Cu;
    {
        const bool branch_taken_0x2b273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B273Cu;
        // 0x2b2740: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b273c) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2744u;
label_2b2744:
    // 0x2b2744: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2B2744u;
    {
        const bool branch_taken_0x2b2744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2744u;
        // 0x2b2748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2744) {
            ctx->pc = 0x2B28E0u;
            goto label_2b28e0;
        }
    }
    ctx->pc = 0x2B274Cu;
    // 0x2b274c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2B274Cu;
    {
        const bool branch_taken_0x2b274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B274Cu;
        // 0x2b2750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b274c) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2754u;
label_2b2754:
    // 0x2b2754: 0x10620098  beq         $v1, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x2B2754u;
    {
        const bool branch_taken_0x2b2754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2754u;
        // 0x2b2758: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2754) {
            ctx->pc = 0x2B29B8u;
            goto label_2b29b8;
        }
    }
    ctx->pc = 0x2B275Cu;
    // 0x2b275c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B275Cu;
    {
        const bool branch_taken_0x2b275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B275Cu;
        // 0x2b2760: 0x3402e200  ori         $v0, $zero, 0xE200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57856);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b275c) {
            ctx->pc = 0x2B27E4u;
            goto label_2b27e4;
        }
    }
    ctx->pc = 0x2B2764u;
    // 0x2b2764: 0x3402d300  ori         $v0, $zero, 0xD300
    ctx->pc = 0x2b2764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54016);
    // 0x2b2768: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2B2768u;
    {
        const bool branch_taken_0x2b2768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2768u;
        // 0x2b276c: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2768) {
            ctx->pc = 0x2B2948u;
            goto label_2b2948;
        }
    }
    ctx->pc = 0x2B2770u;
    // 0x2b2770: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B2770u;
    {
        const bool branch_taken_0x2b2770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2770u;
        // 0x2b2774: 0x3402d600  ori         $v0, $zero, 0xD600 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54784);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2770) {
            ctx->pc = 0x2B27B0u;
            goto label_2b27b0;
        }
    }
    ctx->pc = 0x2B2778u;
    // 0x2b2778: 0x3402ac00  ori         $v0, $zero, 0xAC00
    ctx->pc = 0x2b2778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44032);
    // 0x2b277c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2B277Cu;
    {
        const bool branch_taken_0x2b277c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B277Cu;
        // 0x2b2780: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b277c) {
            ctx->pc = 0x2B2988u;
            goto label_2b2988;
        }
    }
    ctx->pc = 0x2B2784u;
    // 0x2b2784: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2784u;
    {
        const bool branch_taken_0x2b2784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2784u;
        // 0x2b2788: 0x3402ad00  ori         $v0, $zero, 0xAD00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2784) {
            ctx->pc = 0x2B27A0u;
            goto label_2b27a0;
        }
    }
    ctx->pc = 0x2B278Cu;
    // 0x2b278c: 0x3402a700  ori         $v0, $zero, 0xA700
    ctx->pc = 0x2b278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42752);
    // 0x2b2790: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B2790u;
    {
        const bool branch_taken_0x2b2790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2790u;
        // 0x2b2794: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2790) {
            ctx->pc = 0x2B28B0u;
            goto label_2b28b0;
        }
    }
    ctx->pc = 0x2B2798u;
    // 0x2b2798: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2B2798u;
    {
        const bool branch_taken_0x2b2798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2798u;
        // 0x2b279c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2798) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B27A0u;
label_2b27a0:
    // 0x2b27a0: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2B27A0u;
    {
        const bool branch_taken_0x2b27a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27A0u;
        // 0x2b27a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27a0) {
            ctx->pc = 0x2B29E8u;
            goto label_2b29e8;
        }
    }
    ctx->pc = 0x2B27A8u;
    // 0x2b27a8: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2B27A8u;
    {
        const bool branch_taken_0x2b27a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27A8u;
        // 0x2b27ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27a8) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B27B0u;
label_2b27b0:
    // 0x2b27b0: 0x10620079  beq         $v1, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2B27B0u;
    {
        const bool branch_taken_0x2b27b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27B0u;
        // 0x2b27b4: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27b0) {
            ctx->pc = 0x2B2998u;
            goto label_2b2998;
        }
    }
    ctx->pc = 0x2B27B8u;
    // 0x2b27b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B27B8u;
    {
        const bool branch_taken_0x2b27b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27B8u;
        // 0x2b27bc: 0x3402d700  ori         $v0, $zero, 0xD700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55040);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27b8) {
            ctx->pc = 0x2B27D4u;
            goto label_2b27d4;
        }
    }
    ctx->pc = 0x2B27C0u;
    // 0x2b27c0: 0x3402d500  ori         $v0, $zero, 0xD500
    ctx->pc = 0x2b27c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54528);
    // 0x2b27c4: 0x1062006c  beq         $v1, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2B27C4u;
    {
        const bool branch_taken_0x2b27c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27C4u;
        // 0x2b27c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27c4) {
            ctx->pc = 0x2B2978u;
            goto label_2b2978;
        }
    }
    ctx->pc = 0x2B27CCu;
    // 0x2b27cc: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2B27CCu;
    {
        const bool branch_taken_0x2b27cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27CCu;
        // 0x2b27d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27cc) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B27D4u;
label_2b27d4:
    // 0x2b27d4: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2B27D4u;
    {
        const bool branch_taken_0x2b27d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27D4u;
        // 0x2b27d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27d4) {
            ctx->pc = 0x2B29A8u;
            goto label_2b29a8;
        }
    }
    ctx->pc = 0x2B27DCu;
    // 0x2b27dc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2B27DCu;
    {
        const bool branch_taken_0x2b27dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27DCu;
        // 0x2b27e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27dc) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B27E4u;
label_2b27e4:
    // 0x2b27e4: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2B27E4u;
    {
        const bool branch_taken_0x2b27e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27E4u;
        // 0x2b27e8: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27e4) {
            ctx->pc = 0x2B2918u;
            goto label_2b2918;
        }
    }
    ctx->pc = 0x2B27ECu;
    // 0x2b27ec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B27ECu;
    {
        const bool branch_taken_0x2b27ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27ECu;
        // 0x2b27f0: 0x3402e500  ori         $v0, $zero, 0xE500 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58624);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27ec) {
            ctx->pc = 0x2B282Cu;
            goto label_2b282c;
        }
    }
    ctx->pc = 0x2B27F4u;
    // 0x2b27f4: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x2b27f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x2b27f8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2B27F8u;
    {
        const bool branch_taken_0x2b27f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27F8u;
        // 0x2b27fc: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27f8) {
            ctx->pc = 0x2B2908u;
            goto label_2b2908;
        }
    }
    ctx->pc = 0x2B2800u;
    // 0x2b2800: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2800u;
    {
        const bool branch_taken_0x2b2800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2800u;
        // 0x2b2804: 0x3402e100  ori         $v0, $zero, 0xE100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2800) {
            ctx->pc = 0x2B281Cu;
            goto label_2b281c;
        }
    }
    ctx->pc = 0x2B2808u;
    // 0x2b2808: 0x3402da00  ori         $v0, $zero, 0xDA00
    ctx->pc = 0x2b2808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55808);
    // 0x2b280c: 0x1062007e  beq         $v1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2B280Cu;
    {
        const bool branch_taken_0x2b280c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B280Cu;
        // 0x2b2810: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b280c) {
            ctx->pc = 0x2B2A08u;
            goto label_2b2a08;
        }
    }
    ctx->pc = 0x2B2814u;
    // 0x2b2814: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x2B2814u;
    {
        const bool branch_taken_0x2b2814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2814u;
        // 0x2b2818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2814) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B281Cu;
label_2b281c:
    // 0x2b281c: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B281Cu;
    {
        const bool branch_taken_0x2b281c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B281Cu;
        // 0x2b2820: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b281c) {
            ctx->pc = 0x2B28F8u;
            goto label_2b28f8;
        }
    }
    ctx->pc = 0x2B2824u;
    // 0x2b2824: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x2B2824u;
    {
        const bool branch_taken_0x2b2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2824u;
        // 0x2b2828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2824) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B282Cu;
label_2b282c:
    // 0x2b282c: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B282Cu;
    {
        const bool branch_taken_0x2b282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B282Cu;
        // 0x2b2830: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b282c) {
            ctx->pc = 0x2B2938u;
            goto label_2b2938;
        }
    }
    ctx->pc = 0x2B2834u;
    // 0x2b2834: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2834u;
    {
        const bool branch_taken_0x2b2834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2834u;
        // 0x2b2838: 0x3402e700  ori         $v0, $zero, 0xE700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2834) {
            ctx->pc = 0x2B2850u;
            goto label_2b2850;
        }
    }
    ctx->pc = 0x2B283Cu;
    // 0x2b283c: 0x3402e400  ori         $v0, $zero, 0xE400
    ctx->pc = 0x2b283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58368);
    // 0x2b2840: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B2840u;
    {
        const bool branch_taken_0x2b2840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2840u;
        // 0x2b2844: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2840) {
            ctx->pc = 0x2B2928u;
            goto label_2b2928;
        }
    }
    ctx->pc = 0x2B2848u;
    // 0x2b2848: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2B2848u;
    {
        const bool branch_taken_0x2b2848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2848u;
        // 0x2b284c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2848) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2850u;
label_2b2850:
    // 0x2b2850: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2B2850u;
    {
        const bool branch_taken_0x2b2850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2850u;
        // 0x2b2854: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2850) {
            ctx->pc = 0x2B2A18u;
            goto label_2b2a18;
        }
    }
    ctx->pc = 0x2B2858u;
    // 0x2b2858: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2B2858u;
    {
        const bool branch_taken_0x2b2858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2858u;
        // 0x2b285c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2858) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2860u;
label_2b2860:
    // 0x2b2860: 0xc0aca8c  jal         func_2B2A30
    ctx->pc = 0x2B2860u;
    SET_GPR_U32(ctx, 31, 0x2B2868u);
    ctx->pc = 0x2B2A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A30u, 0x2B2860u, 0x2B2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2868u;
label_2b2868:
    // 0x2b2868: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2B2868u;
    {
        const bool branch_taken_0x2b2868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2868u;
        // 0x2b286c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2868) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2870u;
label_2b2870:
    // 0x2b2870: 0xc0aca96  jal         func_2B2A58
    ctx->pc = 0x2B2870u;
    SET_GPR_U32(ctx, 31, 0x2B2878u);
    ctx->pc = 0x2B2A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A58u, 0x2B2870u, 0x2B2878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2878u;
label_2b2878:
    // 0x2b2878: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2B2878u;
    {
        const bool branch_taken_0x2b2878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2878u;
        // 0x2b287c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2878) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2880u;
label_2b2880:
    // 0x2b2880: 0xc0acaba  jal         func_2B2AE8
    ctx->pc = 0x2B2880u;
    SET_GPR_U32(ctx, 31, 0x2B2888u);
    ctx->pc = 0x2B2AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2AE8u, 0x2B2880u, 0x2B2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2888u;
label_2b2888:
    // 0x2b2888: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2B2888u;
    {
        const bool branch_taken_0x2b2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2888u;
        // 0x2b288c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2888) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2890u;
label_2b2890:
    // 0x2b2890: 0xc0acac2  jal         func_2B2B08
    ctx->pc = 0x2B2890u;
    SET_GPR_U32(ctx, 31, 0x2B2898u);
    ctx->pc = 0x2B2B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B08u, 0x2B2890u, 0x2B2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2898u;
label_2b2898:
    // 0x2b2898: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2B2898u;
    {
        const bool branch_taken_0x2b2898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2898u;
        // 0x2b289c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2898) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28A0u;
label_2b28a0:
    // 0x2b28a0: 0xc0acade  jal         func_2B2B78
    ctx->pc = 0x2B28A0u;
    SET_GPR_U32(ctx, 31, 0x2B28A8u);
    ctx->pc = 0x2B2B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B78u, 0x2B28A0u, 0x2B28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28A8u;
label_2b28a8:
    // 0x2b28a8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2B28A8u;
    {
        const bool branch_taken_0x2b28a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28A8u;
        // 0x2b28ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28a8) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28B0u;
label_2b28b0:
    // 0x2b28b0: 0xc0acaea  jal         func_2B2BA8
    ctx->pc = 0x2B28B0u;
    SET_GPR_U32(ctx, 31, 0x2B28B8u);
    ctx->pc = 0x2B2BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2BA8u, 0x2B28B0u, 0x2B28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28B8u;
label_2b28b8:
    // 0x2b28b8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2B28B8u;
    {
        const bool branch_taken_0x2b28b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28B8u;
        // 0x2b28bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28b8) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28C0u;
label_2b28c0:
    // 0x2b28c0: 0xc0acb42  jal         func_2B2D08
    ctx->pc = 0x2B28C0u;
    SET_GPR_U32(ctx, 31, 0x2B28C8u);
    ctx->pc = 0x2B2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D08u, 0x2B28C0u, 0x2B28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28C8u;
label_2b28c8:
    // 0x2b28c8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2B28C8u;
    {
        const bool branch_taken_0x2b28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28C8u;
        // 0x2b28cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28c8) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28D0u;
label_2b28d0:
    // 0x2b28d0: 0xc0acb46  jal         func_2B2D18
    ctx->pc = 0x2B28D0u;
    SET_GPR_U32(ctx, 31, 0x2B28D8u);
    ctx->pc = 0x2B2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D18u, 0x2B28D0u, 0x2B28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28D8u;
label_2b28d8:
    // 0x2b28d8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2B28D8u;
    {
        const bool branch_taken_0x2b28d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28D8u;
        // 0x2b28dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28d8) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28E0u;
label_2b28e0:
    // 0x2b28e0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2B28E0u;
    {
        const bool branch_taken_0x2b28e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28E0u;
        // 0x2b28e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28e0) {
            ctx->pc = 0x2B2A20u;
            goto label_2b2a20;
        }
    }
    ctx->pc = 0x2B28E8u;
label_2b28e8:
    // 0x2b28e8: 0xc0acbce  jal         func_2B2F38
    ctx->pc = 0x2B28E8u;
    SET_GPR_U32(ctx, 31, 0x2B28F0u);
    ctx->pc = 0x2B2F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F38u, 0x2B28E8u, 0x2B28F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B28F0u;
label_2b28f0:
    // 0x2b28f0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2B28F0u;
    {
        const bool branch_taken_0x2b28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28F0u;
        // 0x2b28f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28f0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B28F8u;
label_2b28f8:
    // 0x2b28f8: 0xc0acbda  jal         func_2B2F68
    ctx->pc = 0x2B28F8u;
    SET_GPR_U32(ctx, 31, 0x2B2900u);
    ctx->pc = 0x2B2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F68u, 0x2B28F8u, 0x2B2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2900u;
label_2b2900:
    // 0x2b2900: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2B2900u;
    {
        const bool branch_taken_0x2b2900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2900u;
        // 0x2b2904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2900) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2908u;
label_2b2908:
    // 0x2b2908: 0xc0acbdc  jal         func_2B2F70
    ctx->pc = 0x2B2908u;
    SET_GPR_U32(ctx, 31, 0x2B2910u);
    ctx->pc = 0x2B2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F70u, 0x2B2908u, 0x2B2910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2910u;
label_2b2910:
    // 0x2b2910: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2B2910u;
    {
        const bool branch_taken_0x2b2910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2910u;
        // 0x2b2914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2910) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2918u;
label_2b2918:
    // 0x2b2918: 0xc0acbde  jal         func_2B2F78
    ctx->pc = 0x2B2918u;
    SET_GPR_U32(ctx, 31, 0x2B2920u);
    ctx->pc = 0x2B2F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F78u, 0x2B2918u, 0x2B2920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2920u;
label_2b2920:
    // 0x2b2920: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B2920u;
    {
        const bool branch_taken_0x2b2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2920u;
        // 0x2b2924: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2920) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2928u;
label_2b2928:
    // 0x2b2928: 0xc0acaf6  jal         func_2B2BD8
    ctx->pc = 0x2B2928u;
    SET_GPR_U32(ctx, 31, 0x2B2930u);
    ctx->pc = 0x2B2BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2BD8u, 0x2B2928u, 0x2B2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2930u;
label_2b2930:
    // 0x2b2930: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2B2930u;
    {
        const bool branch_taken_0x2b2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2930) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2938u;
label_2b2938:
    // 0x2b2938: 0xc0acb26  jal         func_2B2C98
    ctx->pc = 0x2B2938u;
    SET_GPR_U32(ctx, 31, 0x2B2940u);
    ctx->pc = 0x2B2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C98u, 0x2B2938u, 0x2B2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2940u;
label_2b2940:
    // 0x2b2940: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B2940u;
    {
        const bool branch_taken_0x2b2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2940u;
        // 0x2b2944: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2940) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2948u;
label_2b2948:
    // 0x2b2948: 0xc0acbe0  jal         func_2B2F80
    ctx->pc = 0x2B2948u;
    SET_GPR_U32(ctx, 31, 0x2B2950u);
    ctx->pc = 0x2B2F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F80u, 0x2B2948u, 0x2B2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2950u;
label_2b2950:
    // 0x2b2950: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2B2950u;
    {
        const bool branch_taken_0x2b2950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2950u;
        // 0x2b2954: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2950) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2958u;
label_2b2958:
    // 0x2b2958: 0xc0acbea  jal         func_2B2FA8
    ctx->pc = 0x2B2958u;
    SET_GPR_U32(ctx, 31, 0x2B2960u);
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2B2958u, 0x2B2960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2960u;
label_2b2960:
    // 0x2b2960: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2B2960u;
    {
        const bool branch_taken_0x2b2960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2960u;
        // 0x2b2964: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2960) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2968u;
label_2b2968:
    // 0x2b2968: 0xc0acbec  jal         func_2B2FB0
    ctx->pc = 0x2B2968u;
    SET_GPR_U32(ctx, 31, 0x2B2970u);
    ctx->pc = 0x2B2FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FB0u, 0x2B2968u, 0x2B2970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2970u;
label_2b2970:
    // 0x2b2970: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2B2970u;
    {
        const bool branch_taken_0x2b2970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2970u;
        // 0x2b2974: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2970) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2978u;
label_2b2978:
    // 0x2b2978: 0xc0acbf4  jal         func_2B2FD0
    ctx->pc = 0x2B2978u;
    SET_GPR_U32(ctx, 31, 0x2B2980u);
    ctx->pc = 0x2B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FD0u, 0x2B2978u, 0x2B2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2980u;
label_2b2980:
    // 0x2b2980: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B2980u;
    {
        const bool branch_taken_0x2b2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2980u;
        // 0x2b2984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2980) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2988u;
label_2b2988:
    // 0x2b2988: 0xc0acbf6  jal         func_2B2FD8
    ctx->pc = 0x2B2988u;
    SET_GPR_U32(ctx, 31, 0x2B2990u);
    ctx->pc = 0x2B2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FD8u, 0x2B2988u, 0x2B2990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2990u;
label_2b2990:
    // 0x2b2990: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B2990u;
    {
        const bool branch_taken_0x2b2990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2990u;
        // 0x2b2994: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2990) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2998u;
label_2b2998:
    // 0x2b2998: 0xc0acbfc  jal         func_2B2FF0
    ctx->pc = 0x2B2998u;
    SET_GPR_U32(ctx, 31, 0x2B29A0u);
    ctx->pc = 0x2B2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FF0u, 0x2B2998u, 0x2B29A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29A0u;
label_2b29a0:
    // 0x2b29a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B29A0u;
    {
        const bool branch_taken_0x2b29a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29A0u;
        // 0x2b29a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29a0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29A8u;
label_2b29a8:
    // 0x2b29a8: 0xc0acbfe  jal         func_2B2FF8
    ctx->pc = 0x2B29A8u;
    SET_GPR_U32(ctx, 31, 0x2B29B0u);
    ctx->pc = 0x2B2FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FF8u, 0x2B29A8u, 0x2B29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29B0u;
label_2b29b0:
    // 0x2b29b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B29B0u;
    {
        const bool branch_taken_0x2b29b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29B0u;
        // 0x2b29b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29b0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29B8u;
label_2b29b8:
    // 0x2b29b8: 0xc0acc00  jal         func_2B3000
    ctx->pc = 0x2B29B8u;
    SET_GPR_U32(ctx, 31, 0x2B29C0u);
    ctx->pc = 0x2B3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3000u, 0x2B29B8u, 0x2B29C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29C0u;
label_2b29c0:
    // 0x2b29c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B29C0u;
    {
        const bool branch_taken_0x2b29c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29C0u;
        // 0x2b29c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29c0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29C8u;
label_2b29c8:
    // 0x2b29c8: 0xc0acc02  jal         func_2B3008
    ctx->pc = 0x2B29C8u;
    SET_GPR_U32(ctx, 31, 0x2B29D0u);
    ctx->pc = 0x2B3008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3008u, 0x2B29C8u, 0x2B29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29D0u;
label_2b29d0:
    // 0x2b29d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B29D0u;
    {
        const bool branch_taken_0x2b29d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29D0u;
        // 0x2b29d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29d0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29D8u;
label_2b29d8:
    // 0x2b29d8: 0xc0acc08  jal         func_2B3020
    ctx->pc = 0x2B29D8u;
    SET_GPR_U32(ctx, 31, 0x2B29E0u);
    ctx->pc = 0x2B3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3020u, 0x2B29D8u, 0x2B29E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29E0u;
label_2b29e0:
    // 0x2b29e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B29E0u;
    {
        const bool branch_taken_0x2b29e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E0u;
        // 0x2b29e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29e0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29E8u;
label_2b29e8:
    // 0x2b29e8: 0xc0acb4a  jal         func_2B2D28
    ctx->pc = 0x2B29E8u;
    SET_GPR_U32(ctx, 31, 0x2B29F0u);
    ctx->pc = 0x2B2D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D28u, 0x2B29E8u, 0x2B29F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29F0u;
label_2b29f0:
    // 0x2b29f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B29F0u;
    {
        const bool branch_taken_0x2b29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F0u;
        // 0x2b29f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29f0) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0xc0acc0e  jal         func_2B3038
    ctx->pc = 0x2B29F8u;
    SET_GPR_U32(ctx, 31, 0x2B2A00u);
    ctx->pc = 0x2B3038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3038u, 0x2B29F8u, 0x2B2A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A00u;
label_2b2a00:
    // 0x2b2a00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2A00u;
    {
        const bool branch_taken_0x2b2a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A00u;
        // 0x2b2a04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a00) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2A08u;
label_2b2a08:
    // 0x2b2a08: 0xc0acc14  jal         func_2B3050
    ctx->pc = 0x2B2A08u;
    SET_GPR_U32(ctx, 31, 0x2B2A10u);
    ctx->pc = 0x2B3050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3050u, 0x2B2A08u, 0x2B2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A10u;
label_2b2a10:
    // 0x2b2a10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2A10u;
    {
        const bool branch_taken_0x2b2a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A10u;
        // 0x2b2a14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a10) {
            ctx->pc = 0x2B2A24u;
            goto label_2b2a24;
        }
    }
    ctx->pc = 0x2B2A18u;
label_2b2a18:
    // 0x2b2a18: 0xc0acb62  jal         func_2B2D88
    ctx->pc = 0x2B2A18u;
    SET_GPR_U32(ctx, 31, 0x2B2A20u);
    ctx->pc = 0x2B2D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D88u, 0x2B2A18u, 0x2B2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A20u;
label_2b2a20:
    // 0x2b2a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2a24:
    // 0x2b2a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A24u;
        // 0x2b2a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A2Cu;
    // 0x2b2a2c: 0x0  nop
    ctx->pc = 0x2b2a2cu;
    // NOP
    ctx->pc = 0x2b2a30u;
}
