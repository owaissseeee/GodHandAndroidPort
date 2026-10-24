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

// Function: func_003AC2F8
// Address: 0x3ac2f8 - 0x3aca28
void func_003AC2F8_0x3ac2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AC2F8_0x3ac2f8");
#endif

    switch (ctx->pc) {
        case 0x3ac340u: goto label_3ac340;
        case 0x3ac430u: goto label_3ac430;
        case 0x3ac688u: goto label_3ac688;
        case 0x3ac710u: goto label_3ac710;
        case 0x3ac738u: goto label_3ac738;
        case 0x3ac748u: goto label_3ac748;
        case 0x3ac760u: goto label_3ac760;
        case 0x3ac7d0u: goto label_3ac7d0;
        case 0x3ac7e8u: goto label_3ac7e8;
        case 0x3ac810u: goto label_3ac810;
        case 0x3ac8c4u: goto label_3ac8c4;
        case 0x3ac92cu: goto label_3ac92c;
        case 0x3aca04u: goto label_3aca04;
        default: break;
    }

    ctx->pc = 0x3ac2f8u;

    // 0x3ac2f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ac2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ac2fc: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x3ac2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x3ac300: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ac300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ac304: 0x2ca2001f  sltiu       $v0, $a1, 0x1F
    ctx->pc = 0x3ac304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3ac308: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ac308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ac30c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ac30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac310: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ac310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ac314: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ac314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ac318: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ac318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ac31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC31Cu;
    {
        const bool branch_taken_0x3ac31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC31Cu;
        // 0x3ac320: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac31c) {
            ctx->pc = 0x3AC334u;
            goto label_3ac334;
        }
    }
    ctx->pc = 0x3AC324u;
    // 0x3ac324: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac328: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3ac328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3ac32c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC32Cu;
    {
        const bool branch_taken_0x3ac32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC32Cu;
        // 0x3ac330: 0xa28824  and         $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac32c) {
            ctx->pc = 0x3AC338u;
            goto label_3ac338;
        }
    }
    ctx->pc = 0x3AC334u;
label_3ac334:
    // 0x3ac334: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3ac334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3ac338:
    // 0x3ac338: 0xc0ea012  jal         func_3A8048
    ctx->pc = 0x3AC338u;
    SET_GPR_U32(ctx, 31, 0x3AC340u);
    ctx->pc = 0x3AC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC338u;
    // 0x3ac33c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8048u, 0x3AC338u, 0x3AC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC340u;
label_3ac340:
    // 0x3ac340: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x3ac340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x3ac344: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AC344u;
    {
        const bool branch_taken_0x3ac344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC344u;
        // 0x3ac348: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac344) {
            ctx->pc = 0x3AC3A0u;
            goto label_3ac3a0;
        }
    }
    ctx->pc = 0x3AC34Cu;
    // 0x3ac34c: 0x1150c2  srl         $t2, $s1, 3
    ctx->pc = 0x3ac34cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x3ac350: 0x2443a9d0  addiu       $v1, $v0, -0x5630
    ctx->pc = 0x3ac350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x3ac354: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x3ac354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3ac358: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x3ac358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3ac35c: 0x1209000e  beq         $s0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AC35Cu;
    {
        const bool branch_taken_0x3ac35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x3AC360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC35Cu;
        // 0x3ac360: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac35c) {
            ctx->pc = 0x3AC398u;
            goto label_3ac398;
        }
    }
    ctx->pc = 0x3AC364u;
    // 0x3ac364: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3ac364u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ac368: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac36c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3ac36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ac370: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3ac370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3ac374: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3ac374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ac378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac37c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3ac37cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3ac380: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3ac380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3ac384: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3ac384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3ac388: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3ac388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3ac38c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ac38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac390: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x3AC390u;
    {
        const bool branch_taken_0x3ac390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC390u;
        // 0x3ac394: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac390) {
            ctx->pc = 0x3AC9F8u;
            goto label_3ac9f8;
        }
    }
    ctx->pc = 0x3AC398u;
label_3ac398:
    // 0x3ac398: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3AC398u;
    {
        const bool branch_taken_0x3ac398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC398u;
        // 0x3ac39c: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac398) {
            ctx->pc = 0x3AC490u;
            goto label_3ac490;
        }
    }
    ctx->pc = 0x3AC3A0u;
label_3ac3a0:
    // 0x3ac3a0: 0x112242  srl         $a0, $s1, 9
    ctx->pc = 0x3ac3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x3ac3a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3A4u;
    {
        const bool branch_taken_0x3ac3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3A4u;
        // 0x3ac3a8: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3a4) {
            ctx->pc = 0x3AC3B4u;
            goto label_3ac3b4;
        }
    }
    ctx->pc = 0x3AC3ACu;
    // 0x3ac3ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3AC3ACu;
    {
        const bool branch_taken_0x3ac3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3ACu;
        // 0x3ac3b0: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3ac) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3B4u;
label_3ac3b4:
    // 0x3ac3b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3B4u;
    {
        const bool branch_taken_0x3ac3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3B4u;
        // 0x3ac3b8: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3b4) {
            ctx->pc = 0x3AC3C4u;
            goto label_3ac3c4;
        }
    }
    ctx->pc = 0x3AC3BCu;
    // 0x3ac3bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AC3BCu;
    {
        const bool branch_taken_0x3ac3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3BCu;
        // 0x3ac3c0: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3bc) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3C4u;
label_3ac3c4:
    // 0x3ac3c4: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x3ac3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3ac3c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AC3C8u;
    {
        const bool branch_taken_0x3ac3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3C8u;
        // 0x3ac3cc: 0x248a005b  addiu       $t2, $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3c8) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3D0u;
    // 0x3ac3d0: 0x2c820055  sltiu       $v0, $a0, 0x55
    ctx->pc = 0x3ac3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3ac3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3D4u;
    {
        const bool branch_taken_0x3ac3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3D4u;
        // 0x3ac3d8: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3d4) {
            ctx->pc = 0x3AC3E4u;
            goto label_3ac3e4;
        }
    }
    ctx->pc = 0x3AC3DCu;
    // 0x3ac3dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AC3DCu;
    {
        const bool branch_taken_0x3ac3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3DCu;
        // 0x3ac3e0: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3dc) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3E4u;
label_3ac3e4:
    // 0x3ac3e4: 0x2c820155  sltiu       $v0, $a0, 0x155
    ctx->pc = 0x3ac3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3ac3e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3E8u;
    {
        const bool branch_taken_0x3ac3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3E8u;
        // 0x3ac3ec: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3e8) {
            ctx->pc = 0x3AC3F8u;
            goto label_3ac3f8;
        }
    }
    ctx->pc = 0x3AC3F0u;
    // 0x3ac3f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC3F0u;
    {
        const bool branch_taken_0x3ac3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3F0u;
        // 0x3ac3f4: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3f0) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC3F8u;
label_3ac3f8:
    // 0x3ac3f8: 0x2c820555  sltiu       $v0, $a0, 0x555
    ctx->pc = 0x3ac3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3ac3fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC3FCu;
    {
        const bool branch_taken_0x3ac3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3FCu;
        // 0x3ac400: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3fc) {
            ctx->pc = 0x3AC40Cu;
            goto label_3ac40c;
        }
    }
    ctx->pc = 0x3AC404u;
    // 0x3ac404: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC404u;
    {
        const bool branch_taken_0x3ac404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC404u;
        // 0x3ac408: 0x244a007c  addiu       $t2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac404) {
            ctx->pc = 0x3AC410u;
            goto label_3ac410;
        }
    }
    ctx->pc = 0x3AC40Cu;
label_3ac40c:
    // 0x3ac40c: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x3ac40cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3ac410:
    // 0x3ac410: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ac414: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x3ac414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3ac418: 0x2443a9d0  addiu       $v1, $v0, -0x5630
    ctx->pc = 0x3ac418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x3ac41c: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x3ac41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3ac420: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x3ac420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3ac424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC424u;
    {
        const bool branch_taken_0x3ac424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC424u;
        // 0x3ac428: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac424) {
            ctx->pc = 0x3AC43Cu;
            goto label_3ac43c;
        }
    }
    ctx->pc = 0x3AC42Cu;
    // 0x3ac42c: 0x0  nop
    ctx->pc = 0x3ac42cu;
    // NOP
label_3ac430:
    // 0x3ac430: 0x4e30140  bgezl       $a3, . + 4 + (0x140 << 2)
    ctx->pc = 0x3AC430u;
    {
        const bool branch_taken_0x3ac430 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x3ac430) {
            ctx->pc = 0x3AC434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC430u;
            // 0x3ac434: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC934u;
            goto label_3ac934;
        }
    }
    ctx->pc = 0x3AC438u;
    // 0x3ac438: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3ac438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ac43c:
    // 0x3ac43c: 0x52080014  beql        $s0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AC43Cu;
    {
        const bool branch_taken_0x3ac43c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        if (branch_taken_0x3ac43c) {
            ctx->pc = 0x3AC440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC43Cu;
            // 0x3ac440: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC490u;
            goto label_3ac490;
        }
    }
    ctx->pc = 0x3AC444u;
    // 0x3ac444: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ac444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ac448: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ac448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac44c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3ac44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3ac450: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x3ac450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac454: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x3ac454u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac458: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC458u;
    {
        const bool branch_taken_0x3ac458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC458u;
        // 0x3ac45c: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac458) {
            ctx->pc = 0x3AC470u;
            goto label_3ac470;
        }
    }
    ctx->pc = 0x3AC460u;
    // 0x3ac460: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac464: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC468u;
    {
        const bool branch_taken_0x3ac468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC468u;
        // 0x3ac46c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac468) {
            ctx->pc = 0x3AC47Cu;
            goto label_3ac47c;
        }
    }
    ctx->pc = 0x3AC470u;
label_3ac470:
    // 0x3ac470: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3ac470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3ac474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac478: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3ac478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3ac47c:
    // 0x3ac47c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3ac47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac480: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3AC480u;
    {
        const bool branch_taken_0x3ac480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac480) {
            ctx->pc = 0x3AC430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac430;
        }
    }
    ctx->pc = 0x3AC488u;
    // 0x3ac488: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3ac488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3ac48c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ac48cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3ac490:
    // 0x3ac490: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ac494: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x3ac494u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac498: 0x2442a9d8  addiu       $v0, $v0, -0x5628
    ctx->pc = 0x3ac498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945240));
    // 0x3ac49c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ac49cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3FA9E0u));
    // 0x3ac4a0: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x3AC4A0u;
    {
        const bool branch_taken_0x3ac4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4A0u;
        // 0x3ac4a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4a0) {
            ctx->pc = 0x3AC6BCu;
            goto label_3ac6bc;
        }
    }
    ctx->pc = 0x3AC4A8u;
    // 0x3ac4a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ac4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ac4ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ac4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac4b0: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3ac4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3ac4b4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x3ac4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac4b8: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x3ac4b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac4bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC4BCu;
    {
        const bool branch_taken_0x3ac4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4BCu;
        // 0x3ac4c0: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4bc) {
            ctx->pc = 0x3AC4D4u;
            goto label_3ac4d4;
        }
    }
    ctx->pc = 0x3AC4C4u;
    // 0x3ac4c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac4c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC4CCu;
    {
        const bool branch_taken_0x3ac4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4CCu;
        // 0x3ac4d0: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4cc) {
            ctx->pc = 0x3AC4E0u;
            goto label_3ac4e0;
        }
    }
    ctx->pc = 0x3AC4D4u;
label_3ac4d4:
    // 0x3ac4d4: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3ac4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3ac4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac4dc: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3ac4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3ac4e0:
    // 0x3ac4e0: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3ac4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac4e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AC4E4u;
    {
        const bool branch_taken_0x3ac4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4E4u;
        // 0x3ac4e8: 0x25c4a9d8  addiu       $a0, $t6, -0x5628 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4e4) {
            ctx->pc = 0x3AC538u;
            goto label_3ac538;
        }
    }
    ctx->pc = 0x3AC4ECu;
    // 0x3ac4ec: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x3ac4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3ac4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ac4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac4f4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3ac4f8: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x3ac4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3ac4fc: 0x25c5a9d8  addiu       $a1, $t6, -0x5628
    ctx->pc = 0x3ac4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945240));
    // 0x3ac500: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3ac500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3ac504: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x3ac504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x3ac508: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3ac508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3ac50c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ac50cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ac510: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x3ac510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x3ac514: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ac514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3ac518: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ac518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3ac51c: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x3ac51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3ac520: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x3ac520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x3ac524: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3ac524u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x3ac528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac52c: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x3ac52cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x3ac530: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x3AC530u;
    {
        const bool branch_taken_0x3ac530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC530u;
        // 0x3ac534: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac530) {
            ctx->pc = 0x3AC9FCu;
            goto label_3ac9fc;
        }
    }
    ctx->pc = 0x3AC538u;
label_3ac538:
    // 0x3ac538: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x3ac538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x3ac53c: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC53Cu;
    {
        const bool branch_taken_0x3ac53c = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x3AC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC53Cu;
        // 0x3ac540: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac53c) {
            ctx->pc = 0x3AC558u;
            goto label_3ac558;
        }
    }
    ctx->pc = 0x3AC544u;
    // 0x3ac544: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3ac544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3ac548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac54c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ac54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac550: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x3AC550u;
    {
        const bool branch_taken_0x3ac550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC550u;
        // 0x3ac554: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac550) {
            ctx->pc = 0x3AC9F8u;
            goto label_3ac9f8;
        }
    }
    ctx->pc = 0x3AC558u;
label_3ac558:
    // 0x3ac558: 0x2ca20200  sltiu       $v0, $a1, 0x200
    ctx->pc = 0x3ac558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x3ac55c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC55Cu;
    {
        const bool branch_taken_0x3ac55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC55Cu;
        // 0x3ac560: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac55c) {
            ctx->pc = 0x3AC5A8u;
            goto label_3ac5a8;
        }
    }
    ctx->pc = 0x3AC564u;
    // 0x3ac564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ac564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ac568: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3ac568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ac56c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3ac56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3ac570: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3ac570u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3ac574: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x3ac574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x3ac578: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3ac578u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3ac57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac580: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ac580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ac584: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x3ac584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3ac588: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac58c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ac58cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ac590: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3ac590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3ac594: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ac594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ac598: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x3ac598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3ac59c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3ac59cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3ac5a0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3AC5A0u;
    {
        const bool branch_taken_0x3ac5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5A0u;
        // 0x3ac5a4: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5a0) {
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC5A8u;
label_3ac5a8:
    // 0x3ac5a8: 0x51a42  srl         $v1, $a1, 9
    ctx->pc = 0x3ac5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x3ac5ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC5ACu;
    {
        const bool branch_taken_0x3ac5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5ACu;
        // 0x3ac5b0: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5ac) {
            ctx->pc = 0x3AC5BCu;
            goto label_3ac5bc;
        }
    }
    ctx->pc = 0x3AC5B4u;
    // 0x3ac5b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3AC5B4u;
    {
        const bool branch_taken_0x3ac5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5B4u;
        // 0x3ac5b8: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5b4) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC5BCu;
label_3ac5bc:
    // 0x3ac5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC5BCu;
    {
        const bool branch_taken_0x3ac5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5BCu;
        // 0x3ac5c0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5bc) {
            ctx->pc = 0x3AC5CCu;
            goto label_3ac5cc;
        }
    }
    ctx->pc = 0x3AC5C4u;
    // 0x3ac5c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AC5C4u;
    {
        const bool branch_taken_0x3ac5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5C4u;
        // 0x3ac5c8: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5c4) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC5CCu;
label_3ac5cc:
    // 0x3ac5cc: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x3ac5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3ac5d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AC5D0u;
    {
        const bool branch_taken_0x3ac5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5D0u;
        // 0x3ac5d4: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5d0) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC5D8u;
    // 0x3ac5d8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x3ac5d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3ac5dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC5DCu;
    {
        const bool branch_taken_0x3ac5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5DCu;
        // 0x3ac5e0: 0x51302  srl         $v0, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5dc) {
            ctx->pc = 0x3AC5ECu;
            goto label_3ac5ec;
        }
    }
    ctx->pc = 0x3AC5E4u;
    // 0x3ac5e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AC5E4u;
    {
        const bool branch_taken_0x3ac5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5E4u;
        // 0x3ac5e8: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5e4) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC5ECu;
label_3ac5ec:
    // 0x3ac5ec: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x3ac5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3ac5f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC5F0u;
    {
        const bool branch_taken_0x3ac5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5F0u;
        // 0x3ac5f4: 0x513c2  srl         $v0, $a1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5f0) {
            ctx->pc = 0x3AC600u;
            goto label_3ac600;
        }
    }
    ctx->pc = 0x3AC5F8u;
    // 0x3ac5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC5F8u;
    {
        const bool branch_taken_0x3ac5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC5F8u;
        // 0x3ac5fc: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac5f8) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC600u;
label_3ac600:
    // 0x3ac600: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x3ac600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3ac604: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC604u;
    {
        const bool branch_taken_0x3ac604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC604u;
        // 0x3ac608: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac604) {
            ctx->pc = 0x3AC614u;
            goto label_3ac614;
        }
    }
    ctx->pc = 0x3AC60Cu;
    // 0x3ac60c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AC60Cu;
    {
        const bool branch_taken_0x3ac60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC60Cu;
        // 0x3ac610: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac60c) {
            ctx->pc = 0x3AC618u;
            goto label_3ac618;
        }
    }
    ctx->pc = 0x3AC614u;
label_3ac614:
    // 0x3ac614: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x3ac614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3ac618:
    // 0x3ac618: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3ac618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3ac61c: 0x2689a9d0  addiu       $t1, $s4, -0x5630
    ctx->pc = 0x3ac61cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
    // 0x3ac620: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x3ac620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3ac624: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3ac624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3ac628: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AC628u;
    {
        const bool branch_taken_0x3ac628 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x3ac628) {
            ctx->pc = 0x3AC62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC628u;
            // 0x3ac62c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC664u;
            goto label_3ac664;
        }
    }
    ctx->pc = 0x3AC630u;
    // 0x3ac630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ac630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ac634: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3ac634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3ac638: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3ac638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ac63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ac63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac640: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3ac640u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3ac644: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3ac644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3ac648: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3ac648u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3ac64c: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3ac64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3ac650: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3ac650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3ac654: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3ac654u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3ac658: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3ac658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3ac65c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3AC65Cu;
    {
        const bool branch_taken_0x3ac65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC65Cu;
        // 0x3ac660: 0xad250004  sw          $a1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac65c) {
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC664u;
label_3ac664:
    // 0x3ac664: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac668: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3ac668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3ac66c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ac66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ac670: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3ac670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ac674: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3AC674u;
    {
        const bool branch_taken_0x3ac674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac674) {
            ctx->pc = 0x3AC678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC674u;
            // 0x3ac678: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC67Cu;
    // 0x3ac67c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ac67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac680: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3ac680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3ac684: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3ac684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3ac688:
    // 0x3ac688: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC688u;
    {
        const bool branch_taken_0x3ac688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3ac688) {
            ctx->pc = 0x3AC68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC688u;
            // 0x3ac68c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC6A8u;
            goto label_3ac6a8;
        }
    }
    ctx->pc = 0x3AC690u;
    // 0x3ac690: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3ac690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ac694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ac694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac698: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3ac698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ac69c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC69Cu;
    {
        const bool branch_taken_0x3ac69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac69c) {
            ctx->pc = 0x3AC6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC69Cu;
            // 0x3ac6a0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac688;
        }
    }
    ctx->pc = 0x3AC6A4u;
    // 0x3ac6a4: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x3ac6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3ac6a8:
    // 0x3ac6a8: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x3ac6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x3ac6ac: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x3ac6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x3ac6b0: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x3ac6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x3ac6b4: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x3ac6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x3ac6b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ac6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ac6bc:
    // 0x3ac6bc: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x3ac6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x3ac6c0: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3ac6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3ac6c4: 0x2683a9d0  addiu       $v1, $s4, -0x5630
    ctx->pc = 0x3ac6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
    // 0x3ac6c8: 0x142200b  movn        $a0, $t2, $v0
    ctx->pc = 0x3ac6c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x3ac6cc: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x3ac6ccu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac6d0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x3ac6d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x3ac6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac6d8: 0x823014  dsllv       $a2, $v0, $a0
    ctx->pc = 0x3ac6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x3ac6dc: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x3ac6dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ac6e0: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x3AC6E0u;
    {
        const bool branch_taken_0x3ac6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6E0u;
        // 0x3ac6e4: 0x2683a9d0  addiu       $v1, $s4, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6e0) {
            ctx->pc = 0x3AC850u;
            goto label_3ac850;
        }
    }
    ctx->pc = 0x3AC6E8u;
    // 0x3ac6e8: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x3ac6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3ac6ec: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3AC6ECu;
    {
        const bool branch_taken_0x3ac6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6ECu;
        // 0x3ac6f0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac6ec) {
            ctx->pc = 0x3AC72Cu;
            goto label_3ac72c;
        }
    }
    ctx->pc = 0x3AC6F4u;
    // 0x3ac6f4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3ac6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3ac6f8: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3ac6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3ac6fc: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x3ac6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x3ac700: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x3ac700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3ac704: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AC704u;
    {
        const bool branch_taken_0x3ac704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC704u;
        // 0x3ac708: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac704) {
            ctx->pc = 0x3AC728u;
            goto label_3ac728;
        }
    }
    ctx->pc = 0x3AC70Cu;
    // 0x3ac70c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ac70cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac710:
    // 0x3ac710: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3ac710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3ac714: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x3ac714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ac718: 0x0  nop
    ctx->pc = 0x3ac718u;
    // NOP
    // 0x3ac71c: 0x0  nop
    ctx->pc = 0x3ac71cu;
    // NOP
    // 0x3ac720: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AC720u;
    {
        const bool branch_taken_0x3ac720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC720u;
        // 0x3ac724: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac720) {
            ctx->pc = 0x3AC710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac710;
        }
    }
    ctx->pc = 0x3AC728u;
label_3ac728:
    // 0x3ac728: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ac728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3ac72c:
    // 0x3ac72c: 0x244ca9d0  addiu       $t4, $v0, -0x5630
    ctx->pc = 0x3ac72cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945232));
    // 0x3ac730: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x3ac730u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac734: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x3ac734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_3ac738:
    // 0x3ac738: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3ac738u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac73c: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x3ac73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3ac740: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3ac740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac744: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x3ac744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3ac748:
    // 0x3ac748: 0x12080019  beq         $s0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AC748u;
    {
        const bool branch_taken_0x3ac748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x3AC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC748u;
        // 0x3ac74c: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac748) {
            ctx->pc = 0x3AC7B0u;
            goto label_3ac7b0;
        }
    }
    ctx->pc = 0x3AC750u;
    // 0x3ac750: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3ac750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac754: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x3ac754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x3ac758: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ac758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ac75c: 0x0  nop
    ctx->pc = 0x3ac75cu;
    // NOP
label_3ac760:
    // 0x3ac760: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x3ac760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3ac764: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x3ac764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac768: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC768u;
    {
        const bool branch_taken_0x3ac768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC768u;
        // 0x3ac76c: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac768) {
            ctx->pc = 0x3AC780u;
            goto label_3ac780;
        }
    }
    ctx->pc = 0x3AC770u;
    // 0x3ac770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac774: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC778u;
    {
        const bool branch_taken_0x3ac778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC778u;
        // 0x3ac77c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac778) {
            ctx->pc = 0x3AC78Cu;
            goto label_3ac78c;
        }
    }
    ctx->pc = 0x3AC780u;
label_3ac780:
    // 0x3ac780: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3ac780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3ac784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac788: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3ac788u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3ac78c:
    // 0x3ac78c: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3ac78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac790: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x3AC790u;
    {
        const bool branch_taken_0x3ac790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac790) {
            ctx->pc = 0x3AC794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC790u;
            // 0x3ac794: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC954u;
            goto label_3ac954;
        }
    }
    ctx->pc = 0x3AC798u;
    // 0x3ac798: 0x4e10084  bgez        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x3AC798u;
    {
        const bool branch_taken_0x3ac798 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3AC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC798u;
        // 0x3ac79c: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac798) {
            ctx->pc = 0x3AC9ACu;
            goto label_3ac9ac;
        }
    }
    ctx->pc = 0x3AC7A0u;
    // 0x3ac7a0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3ac7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ac7a4: 0x5608ffee  bnel        $s0, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AC7A4u;
    {
        const bool branch_taken_0x3ac7a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        if (branch_taken_0x3ac7a4) {
            ctx->pc = 0x3AC7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7A4u;
            // 0x3ac7a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac760;
        }
    }
    ctx->pc = 0x3AC7ACu;
    // 0x3ac7ac: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x3ac7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_3ac7b0:
    // 0x3ac7b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC7B0u;
    {
        const bool branch_taken_0x3ac7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7B0u;
        // 0x3ac7b4: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7b0) {
            ctx->pc = 0x3AC7C0u;
            goto label_3ac7c0;
        }
    }
    ctx->pc = 0x3AC7B8u;
    // 0x3ac7b8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3ac7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3ac7bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ac7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3ac7c0:
    // 0x3ac7c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3ac7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3ac7c4: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x3ac7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3ac7c8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3AC7C8u;
    {
        const bool branch_taken_0x3ac7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7c8) {
            ctx->pc = 0x3AC7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7C8u;
            // 0x3ac7cc: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac748;
        }
    }
    ctx->pc = 0x3AC7D0u;
label_3ac7d0:
    // 0x3ac7d0: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x3ac7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x3ac7d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AC7D4u;
    {
        const bool branch_taken_0x3ac7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7D4u;
        // 0x3ac7d8: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7d4) {
            ctx->pc = 0x3AC830u;
            goto label_3ac830;
        }
    }
    ctx->pc = 0x3AC7DCu;
    // 0x3ac7dc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x3ac7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3ac7e0: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AC7E0u;
    {
        const bool branch_taken_0x3ac7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x3AC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E0u;
        // 0x3ac7e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7e0) {
            ctx->pc = 0x3AC7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac7d0;
        }
    }
    ctx->pc = 0x3AC7E8u;
label_3ac7e8:
    // 0x3ac7e8: 0x9d830004  lwu         $v1, 0x4($t4)
    ctx->pc = 0x3ac7e8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3ac7ec: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3ac7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3ac7f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3ac7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ac7f4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AC7F4u;
    {
        const bool branch_taken_0x3ac7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7f4) {
            ctx->pc = 0x3AC7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7F4u;
            // 0x3ac7f8: 0x2683a9d0  addiu       $v1, $s4, -0x5630 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC850u;
            goto label_3ac850;
        }
    }
    ctx->pc = 0x3AC7FCu;
    // 0x3ac7fc: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AC7FCu;
    {
        const bool branch_taken_0x3ac7fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7FCu;
        // 0x3ac800: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7fc) {
            ctx->pc = 0x3AC84Cu;
            goto label_3ac84c;
        }
    }
    ctx->pc = 0x3AC804u;
    // 0x3ac804: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3AC804u;
    {
        const bool branch_taken_0x3ac804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC804u;
        // 0x3ac808: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac804) {
            ctx->pc = 0x3AC738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac738;
        }
    }
    ctx->pc = 0x3AC80Cu;
    // 0x3ac80c: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x3ac80cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_3ac810:
    // 0x3ac810: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3ac810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3ac814: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x3ac814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3ac818: 0x0  nop
    ctx->pc = 0x3ac818u;
    // NOP
    // 0x3ac81c: 0x0  nop
    ctx->pc = 0x3ac81cu;
    // NOP
    // 0x3ac820: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AC820u;
    {
        const bool branch_taken_0x3ac820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC820u;
        // 0x3ac824: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac820) {
            ctx->pc = 0x3AC810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac810;
        }
    }
    ctx->pc = 0x3AC828u;
    // 0x3ac828: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3AC828u;
    {
        const bool branch_taken_0x3ac828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC828u;
        // 0x3ac82c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac828) {
            ctx->pc = 0x3AC738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac738;
        }
    }
    ctx->pc = 0x3AC830u;
label_3ac830:
    // 0x3ac830: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x3ac830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3ac834: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3ac834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3ac838: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ac838u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ac83c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3ac83cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3ac840: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3ac840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ac844: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3AC844u;
    {
        const bool branch_taken_0x3ac844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC844u;
        // 0x3ac848: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac844) {
            ctx->pc = 0x3AC7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac7e8;
        }
    }
    ctx->pc = 0x3AC84Cu;
label_3ac84c:
    // 0x3ac84c: 0x2683a9d0  addiu       $v1, $s4, -0x5630
    ctx->pc = 0x3ac84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
label_3ac850:
    // 0x3ac850: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac854: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3ac854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3ac858: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3ac858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3ac85c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3ac85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ac860: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ac860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ac864: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x3ac864u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac868: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC868u;
    {
        const bool branch_taken_0x3ac868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac868) {
            ctx->pc = 0x3AC86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC868u;
            // 0x3ac86c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC884u;
            goto label_3ac884;
        }
    }
    ctx->pc = 0x3AC870u;
    // 0x3ac870: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3ac870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ac874: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac878: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac87c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC87Cu;
    {
        const bool branch_taken_0x3ac87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC87Cu;
        // 0x3ac880: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac87c) {
            ctx->pc = 0x3AC88Cu;
            goto label_3ac88c;
        }
    }
    ctx->pc = 0x3AC884u;
label_3ac884:
    // 0x3ac884: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac888: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3ac888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3ac88c:
    // 0x3ac88c: 0x2692a9d0  addiu       $s2, $s4, -0x5630
    ctx->pc = 0x3ac88cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
    // 0x3ac890: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x3ac890u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac894: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3ac894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3ac898: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x3ac898u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x3ac89c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ac89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac8a0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3ac8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3ac8a4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3ac8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac8a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC8A8u;
    {
        const bool branch_taken_0x3ac8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A8u;
        // 0x3ac8ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8a8) {
            ctx->pc = 0x3AC8BCu;
            goto label_3ac8bc;
        }
    }
    ctx->pc = 0x3AC8B0u;
    // 0x3ac8b0: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3ac8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ac8b4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3AC8B4u;
    {
        const bool branch_taken_0x3ac8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8B4u;
        // 0x3ac8b8: 0x2686a9d0  addiu       $a2, $s4, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8b4) {
            ctx->pc = 0x3AC9D0u;
            goto label_3ac9d0;
        }
    }
    ctx->pc = 0x3AC8BCu;
label_3ac8bc:
    // 0x3ac8bc: 0xc0eb024  jal         func_3AC090
    ctx->pc = 0x3AC8BCu;
    SET_GPR_U32(ctx, 31, 0x3AC8C4u);
    ctx->pc = 0x3AC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8BCu;
    // 0x3ac8c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC090u, 0x3AC8BCu, 0x3AC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8C4u;
label_3ac8c4:
    // 0x3ac8c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3ac8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3ac8c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3ac8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ac8cc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x3ac8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x3ac8d0: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3ac8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac8d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC8D4u;
    {
        const bool branch_taken_0x3ac8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D4u;
        // 0x3ac8d8: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8d4) {
            ctx->pc = 0x3AC8ECu;
            goto label_3ac8ec;
        }
    }
    ctx->pc = 0x3AC8DCu;
    // 0x3ac8dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac8e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ac8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ac8e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC8E4u;
    {
        const bool branch_taken_0x3ac8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E4u;
        // 0x3ac8e8: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8e4) {
            ctx->pc = 0x3AC8F8u;
            goto label_3ac8f8;
        }
    }
    ctx->pc = 0x3AC8ECu;
label_3ac8ec:
    // 0x3ac8ec: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x3ac8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ac8f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac8f4: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3ac8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3ac8f8:
    // 0x3ac8f8: 0x2682a9d0  addiu       $v0, $s4, -0x5630
    ctx->pc = 0x3ac8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
    // 0x3ac8fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ac8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3ac900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3ac900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3ac904: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3ac904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3ac908: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ac908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ac90c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ac90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ac910: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3ac910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3ac914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC914u;
    {
        const bool branch_taken_0x3ac914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC914u;
        // 0x3ac918: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac914) {
            ctx->pc = 0x3AC924u;
            goto label_3ac924;
        }
    }
    ctx->pc = 0x3AC91Cu;
    // 0x3ac91c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3AC91Cu;
    {
        const bool branch_taken_0x3ac91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC91Cu;
        // 0x3ac920: 0x2686a9d0  addiu       $a2, $s4, -0x5630 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac91c) {
            ctx->pc = 0x3AC9D0u;
            goto label_3ac9d0;
        }
    }
    ctx->pc = 0x3AC924u;
label_3ac924:
    // 0x3ac924: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3AC924u;
    SET_GPR_U32(ctx, 31, 0x3AC92Cu);
    ctx->pc = 0x3AC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC924u;
    // 0x3ac928: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3AC924u, 0x3AC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC92Cu;
label_3ac92c:
    // 0x3ac92c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3AC92Cu;
    {
        const bool branch_taken_0x3ac92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC92Cu;
        // 0x3ac930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac92c) {
            ctx->pc = 0x3ACA08u;
            goto label_3aca08;
        }
    }
    ctx->pc = 0x3AC934u;
label_3ac934:
    // 0x3ac934: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3ac934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3ac938: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3ac938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ac93c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac940: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3ac940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3ac944: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3ac944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3ac948: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ac948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac94c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3AC94Cu;
    {
        const bool branch_taken_0x3ac94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC94Cu;
        // 0x3ac950: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac94c) {
            ctx->pc = 0x3AC9F8u;
            goto label_3ac9f8;
        }
    }
    ctx->pc = 0x3AC954u;
label_3ac954:
    // 0x3ac954: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x3ac954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3ac958: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3ac958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ac95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac960: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3ac960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x3ac964: 0x25c3a9d8  addiu       $v1, $t6, -0x5628
    ctx->pc = 0x3ac964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945240));
    // 0x3ac968: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3ac968u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3ac96c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3ac96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3ac970: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3ac970u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3ac974: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x3ac974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3ac978: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3ac978u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3ac97c: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x3ac97cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3ac980: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac984: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ac984u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ac988: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x3ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x3ac98c: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x3ac98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3ac990: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x3ac990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x3ac994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac998: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3ac998u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3ac99c: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x3ac99cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x3ac9a0: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3ac9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x3ac9a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3AC9A4u;
    {
        const bool branch_taken_0x3ac9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9A4u;
        // 0x3ac9a8: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9a4) {
            ctx->pc = 0x3AC9FCu;
            goto label_3ac9fc;
        }
    }
    ctx->pc = 0x3AC9ACu;
label_3ac9ac:
    // 0x3ac9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac9b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3ac9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3ac9b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ac9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3ac9b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ac9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3ac9bc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3ac9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ac9c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3ac9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ac9c4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3ac9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3ac9c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AC9C8u;
    {
        const bool branch_taken_0x3ac9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9C8u;
        // 0x3ac9cc: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9c8) {
            ctx->pc = 0x3AC9FCu;
            goto label_3ac9fc;
        }
    }
    ctx->pc = 0x3AC9D0u;
label_3ac9d0:
    // 0x3ac9d0: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x3ac9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3ac9d4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x3ac9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3ac9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ac9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac9dc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3ac9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3ac9e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac9e4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3ac9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x3ac9e8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3ac9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3ac9ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ac9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ac9f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ac9f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ac9f4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3ac9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3ac9f8:
    // 0x3ac9f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ac9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ac9fc:
    // 0x3ac9fc: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3AC9FCu;
    SET_GPR_U32(ctx, 31, 0x3ACA04u);
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3AC9FCu, 0x3ACA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA04u;
label_3aca04:
    // 0x3aca04: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3aca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3aca08:
    // 0x3aca08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3aca08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3aca0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3aca0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aca10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3aca10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aca14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3aca14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aca18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3aca18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aca1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aca20: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA20u;
        // 0x3aca24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACA28u;
}
