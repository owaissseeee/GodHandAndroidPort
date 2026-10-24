#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: CheckOmakeFlag__6cMcSysP12GH_SAVE_WORK
// Address: 0x7c9108 - 0x7c9300
void CheckOmakeFlag__6cMcSysP12GH_SAVE_WORK_0x7c9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckOmakeFlag__6cMcSysP12GH_SAVE_WORK_0x7c9108");
#endif

    ctx->pc = 0x7c9108u;

    // 0x7c9108: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x7c9108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x7c910c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C910Cu;
    {
        const bool branch_taken_0x7c910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C910Cu;
        // 0x7c9110: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c910c) {
            ctx->pc = 0x7C9128u;
            goto label_7c9128;
        }
    }
    ctx->pc = 0x7C9114u;
    // 0x7c9114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x7c9114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x7c9118: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c911c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c911cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9120: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9124: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9128:
    // 0x7c9128: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c912c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c9130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9130u;
    {
        const bool branch_taken_0x7c9130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9130u;
        // 0x7c9134: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9130) {
            ctx->pc = 0x7C914Cu;
            goto label_7c914c;
        }
    }
    ctx->pc = 0x7C9138u;
    // 0x7c9138: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x7c9138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x7c913c: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9140: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9144: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9148: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c914c:
    // 0x7c914c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9150: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7c9150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7c9154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9154u;
    {
        const bool branch_taken_0x7c9154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9154u;
        // 0x7c9158: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9154) {
            ctx->pc = 0x7C9170u;
            goto label_7c9170;
        }
    }
    ctx->pc = 0x7C915Cu;
    // 0x7c915c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7c915cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7c9160: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9164: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9168: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c916c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c916cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9170:
    // 0x7c9170: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9174: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x7c9174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x7c9178: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9178u;
    {
        const bool branch_taken_0x7c9178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9178u;
        // 0x7c917c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9178) {
            ctx->pc = 0x7C9194u;
            goto label_7c9194;
        }
    }
    ctx->pc = 0x7C9180u;
    // 0x7c9180: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7c9180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x7c9184: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9188: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c918c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9190: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9194:
    // 0x7c9194: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9198: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x7c9198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x7c919c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C919Cu;
    {
        const bool branch_taken_0x7c919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C919Cu;
        // 0x7c91a0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c919c) {
            ctx->pc = 0x7C91B8u;
            goto label_7c91b8;
        }
    }
    ctx->pc = 0x7C91A4u;
    // 0x7c91a4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x7c91a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x7c91a8: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c91ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c91acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c91b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c91b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c91b4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c91b8:
    // 0x7c91b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c91bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x7c91bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x7c91c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C91C0u;
    {
        const bool branch_taken_0x7c91c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C91C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C91C0u;
        // 0x7c91c4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c91c0) {
            ctx->pc = 0x7C91DCu;
            goto label_7c91dc;
        }
    }
    ctx->pc = 0x7C91C8u;
    // 0x7c91c8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x7c91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x7c91cc: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c91d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c91d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c91d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c91d8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c91dc:
    // 0x7c91dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c91e0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x7c91e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x7c91e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C91E4u;
    {
        const bool branch_taken_0x7c91e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C91E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C91E4u;
        // 0x7c91e8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c91e4) {
            ctx->pc = 0x7C9200u;
            goto label_7c9200;
        }
    }
    ctx->pc = 0x7C91ECu;
    // 0x7c91ec: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x7c91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7c91f0: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c91f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c91f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c91f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c91fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9200:
    // 0x7c9200: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9204: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x7c9204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x7c9208: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9208u;
    {
        const bool branch_taken_0x7c9208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9208u;
        // 0x7c920c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9208) {
            ctx->pc = 0x7C9224u;
            goto label_7c9224;
        }
    }
    ctx->pc = 0x7C9210u;
    // 0x7c9210: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x7c9210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x7c9214: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c921c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c921cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9220: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9224:
    // 0x7c9224: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9228: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x7c9228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x7c922c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C922Cu;
    {
        const bool branch_taken_0x7c922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C922Cu;
        // 0x7c9230: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c922c) {
            ctx->pc = 0x7C9248u;
            goto label_7c9248;
        }
    }
    ctx->pc = 0x7C9234u;
    // 0x7c9234: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x7c9234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x7c9238: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c923c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9240: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9244: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9248:
    // 0x7c9248: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c924c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x7c924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x7c9250: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9250u;
    {
        const bool branch_taken_0x7c9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9250u;
        // 0x7c9254: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9250) {
            ctx->pc = 0x7C926Cu;
            goto label_7c926c;
        }
    }
    ctx->pc = 0x7C9258u;
    // 0x7c9258: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x7c9258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x7c925c: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9260: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9264: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c9268: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c9268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c926c:
    // 0x7c926c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7c926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c9270: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x7c9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x7c9274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C9274u;
    {
        const bool branch_taken_0x7c9274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9274u;
        // 0x7c9278: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9274) {
            ctx->pc = 0x7C9290u;
            goto label_7c9290;
        }
    }
    ctx->pc = 0x7C927Cu;
    // 0x7c927c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x7c927cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x7c9280: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x7c9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
    // 0x7c9284: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7c9284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7c9288: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7c9288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7c928c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c928cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_7c9290:
    // 0x7c9290: 0x94a20030  lhu         $v0, 0x30($a1)
    ctx->pc = 0x7c9290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x7c9294: 0x2c420063  sltiu       $v0, $v0, 0x63
    ctx->pc = 0x7c9294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x7c9298: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C9298u;
    {
        const bool branch_taken_0x7c9298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9298u;
        // 0x7c929c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9298) {
            ctx->pc = 0x7C92F8u;
            goto label_7c92f8;
        }
    }
    ctx->pc = 0x7C92A0u;
    // 0x7c92a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x7c92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x7c92a4: 0x24637a24  addiu       $v1, $v1, 0x7A24
    ctx->pc = 0x7c92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
    // 0x7c92a8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x7c92a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x7c92ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7c92acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7c92b0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x7c92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x7c92b4: 0x3c0a0020  lui         $t2, 0x20
    ctx->pc = 0x7c92b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32 << 16));
    // 0x7c92b8: 0x3c0b0800  lui         $t3, 0x800
    ctx->pc = 0x7c92b8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2048 << 16));
    // 0x7c92bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7c92bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7c92c0: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x7c92c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
    // 0x7c92c4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x7c92c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x7c92c8: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x7c92c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    // 0x7c92cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7c92ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7c92d0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x7c92d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x7c92d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x7c92d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x7c92d8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x7c92d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x7c92dc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x7c92dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x7c92e0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x7c92e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x7c92e4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x7c92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x7c92e8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x7c92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x7c92ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7c92ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7c92f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7c92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7c92f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7c92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_7c92f8:
    // 0x7c92f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C92F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C92F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9300u;
}
} // namespace gh_mcport
