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

// Function: func_0030B148
// Address: 0x30b148 - 0x30b298
void func_0030B148_0x30b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B148_0x30b148");
#endif

    switch (ctx->pc) {
        case 0x30b1a8u: goto label_30b1a8;
        case 0x30b1d4u: goto label_30b1d4;
        case 0x30b1e4u: goto label_30b1e4;
        case 0x30b20cu: goto label_30b20c;
        case 0x30b22cu: goto label_30b22c;
        default: break;
    }

    ctx->pc = 0x30b148u;

    // 0x30b148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b14c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30b150: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30b154: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30b154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30b158: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30b158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30b15c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30b15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30b160: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x30b160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x30b164: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b168: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30b168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b170: 0x8e033d80  lw          $v1, 0x3D80($s0)
    ctx->pc = 0x30b170u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x753D80u));
    // 0x30b174: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x30b174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A18u));
    // 0x30b178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b17c: 0xae033d80  sw          $v1, 0x3D80($s0)
    ctx->pc = 0x30b17cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x753D80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x753D80u, _value); } while (0);
    // 0x30b180: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30b180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30b184: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30B184u;
    {
        const bool branch_taken_0x30b184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B184u;
        // 0x30b188: 0x3c120075  lui         $s2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b184) {
            ctx->pc = 0x30B1ECu;
            goto label_30b1ec;
        }
    }
    ctx->pc = 0x30B18Cu;
    // 0x30b18c: 0x8e423d84  lw          $v0, 0x3D84($s2)
    ctx->pc = 0x30b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15748)));
    // 0x30b190: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30B190u;
    {
        const bool branch_taken_0x30b190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B190u;
        // 0x30b194: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b190) {
            ctx->pc = 0x30B1D8u;
            goto label_30b1d8;
        }
    }
    ctx->pc = 0x30B198u;
    // 0x30b198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b19c: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30b19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30b1a0: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x30B1A0u;
    SET_GPR_U32(ctx, 31, 0x30B1A8u);
    ctx->pc = 0x30B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1A0u;
    // 0x30b1a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x30B1A0u, 0x30B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1A8u;
label_30b1a8:
    // 0x30b1a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B1A8u;
    {
        const bool branch_taken_0x30b1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1A8u;
        // 0x30b1ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1a8) {
            ctx->pc = 0x30B1DCu;
            goto label_30b1dc;
        }
    }
    ctx->pc = 0x30B1B0u;
    // 0x30b1b0: 0x92230569  lbu         $v1, 0x569($s1)
    ctx->pc = 0x30b1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x30b1b4: 0x8e023d80  lw          $v0, 0x3D80($s0)
    ctx->pc = 0x30b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15744)));
    // 0x30b1b8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30b1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x30b1bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B1BCu;
    {
        const bool branch_taken_0x30b1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1BCu;
        // 0x30b1c0: 0x3c050075  lui         $a1, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1bc) {
            ctx->pc = 0x30B1DCu;
            goto label_30b1dc;
        }
    }
    ctx->pc = 0x30B1C4u;
    // 0x30b1c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30b1c8: 0x24a52d80  addiu       $a1, $a1, 0x2D80
    ctx->pc = 0x30b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11648));
    // 0x30b1cc: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x30B1CCu;
    SET_GPR_U32(ctx, 31, 0x30B1D4u);
    ctx->pc = 0x30B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1CCu;
    // 0x30b1d0: 0x3484a000  ori         $a0, $a0, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x30B1CCu, 0x30B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1D4u;
label_30b1d4:
    // 0x30b1d4: 0xae403d84  sw          $zero, 0x3D84($s2)
    ctx->pc = 0x30b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15748), GPR_U32(ctx, 0));
label_30b1d8:
    // 0x30b1d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_30b1dc:
    // 0x30b1dc: 0xc0b29a4  jal         func_2CA690
    ctx->pc = 0x30B1DCu;
    SET_GPR_U32(ctx, 31, 0x30B1E4u);
    ctx->pc = 0x30B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B1DCu;
    // 0x30b1e0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA690u, 0x30B1DCu, 0x30B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B1E4u;
label_30b1e4:
    // 0x30b1e4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x30B1E4u;
    {
        const bool branch_taken_0x30b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1E4u;
        // 0x30b1e8: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1e4) {
            ctx->pc = 0x30B250u;
            goto label_30b250;
        }
    }
    ctx->pc = 0x30B1ECu;
label_30b1ec:
    // 0x30b1ec: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30b1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30b1f0: 0x8e223d84  lw          $v0, 0x3D84($s1)
    ctx->pc = 0x30b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x753D84u));
    // 0x30b1f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30B1F4u;
    {
        const bool branch_taken_0x30b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1F4u;
        // 0x30b1f8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1f4) {
            ctx->pc = 0x30B230u;
            goto label_30b230;
        }
    }
    ctx->pc = 0x30B1FCu;
    // 0x30b1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b200: 0x3484a000  ori         $a0, $a0, 0xA000
    ctx->pc = 0x30b200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    // 0x30b204: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x30B204u;
    SET_GPR_U32(ctx, 31, 0x30B20Cu);
    ctx->pc = 0x30B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B204u;
    // 0x30b208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x30B204u, 0x30B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B20Cu;
label_30b20c:
    // 0x30b20c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30B20Cu;
    {
        const bool branch_taken_0x30b20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B20Cu;
        // 0x30b210: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b20c) {
            ctx->pc = 0x30B234u;
            goto label_30b234;
        }
    }
    ctx->pc = 0x30B214u;
    // 0x30b214: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x30b214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x30b218: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x30b218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x30b21c: 0x8e023d80  lw          $v0, 0x3D80($s0)
    ctx->pc = 0x30b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15744)));
    // 0x30b220: 0x24a52d80  addiu       $a1, $a1, 0x2D80
    ctx->pc = 0x30b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11648));
    // 0x30b224: 0xc0e5cfa  jal         func_3973E8
    ctx->pc = 0x30B224u;
    SET_GPR_U32(ctx, 31, 0x30B22Cu);
    ctx->pc = 0x30B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B224u;
    // 0x30b228: 0x3484a000  ori         $a0, $a0, 0xA000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3973E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3973E8u, 0x30B224u, 0x30B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B22Cu;
label_30b22c:
    // 0x30b22c: 0xae203d84  sw          $zero, 0x3D84($s1)
    ctx->pc = 0x30b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15748), GPR_U32(ctx, 0));
label_30b230:
    // 0x30b230: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_30b234:
    // 0x30b234: 0x8c623cd4  lw          $v0, 0x3CD4($v1)
    ctx->pc = 0x30b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15572)));
    // 0x30b238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B238u;
    {
        const bool branch_taken_0x30b238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B238u;
        // 0x30b23c: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b238) {
            ctx->pc = 0x30B250u;
            goto label_30b250;
        }
    }
    ctx->pc = 0x30B240u;
    // 0x30b240: 0xac603cd4  sw          $zero, 0x3CD4($v1)
    ctx->pc = 0x30b240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15572), GPR_U32(ctx, 0));
    // 0x30b244: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30b244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30b248: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x30b248u;
    runtime->Store32(rdram, ctx, 0x10000000u, GPR_U32(ctx, 0));
    // 0x30b24c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x30b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_30b250:
    // 0x30b250: 0x266474a0  addiu       $a0, $s3, 0x74A0
    ctx->pc = 0x30b250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x30b254: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x30b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x30b258: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x30b258u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30b25c: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x30b25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x30b260: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30b260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30b264: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30b264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30b268: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x30b268u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x30b26c: 0xac830214  sw          $v1, 0x214($a0)
    ctx->pc = 0x30b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 3));
    // 0x30b270: 0xf  sync
    ctx->pc = 0x30b270u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30b274: 0x42000038  ei
    ctx->pc = 0x30b274u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x30b278: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30b278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30b27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b280: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30b280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b288: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30b288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b290: 0x3e00008  jr          $ra
    ctx->pc = 0x30B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B290u;
        // 0x30b294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B298u;
}
