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

// Function: func_00380138
// Address: 0x380138 - 0x380280
void func_00380138_0x380138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380138_0x380138");
#endif

    switch (ctx->pc) {
        case 0x3801a0u: goto label_3801a0;
        case 0x3801e8u: goto label_3801e8;
        case 0x380204u: goto label_380204;
        case 0x380250u: goto label_380250;
        case 0x380268u: goto label_380268;
        default: break;
    }

    ctx->pc = 0x380138u;

    // 0x380138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x380138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38013c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x380140: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x380140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x380144: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x380144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x380148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38014c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x38014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x380150: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x380150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x380154: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x380154u;
    {
        const bool branch_taken_0x380154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380154u;
        // 0x380158: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380154) {
            ctx->pc = 0x380220u;
            goto label_380220;
        }
    }
    ctx->pc = 0x38015Cu;
    // 0x38015c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x38015cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x380160: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x380160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x380164: 0x12500025  beq         $s2, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x380164u;
    {
        const bool branch_taken_0x380164 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x380164) {
            ctx->pc = 0x3801FCu;
            goto label_3801fc;
        }
    }
    ctx->pc = 0x38016Cu;
    // 0x38016c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x38016cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x380170: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x380170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x380174: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x380174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x380178: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x380178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38017c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38017Cu;
    {
        const bool branch_taken_0x38017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38017Cu;
        // 0x380180: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38017c) {
            ctx->pc = 0x3801CCu;
            goto label_3801cc;
        }
    }
    ctx->pc = 0x380184u;
    // 0x380184: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x380184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x380188: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x380188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x38018c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x38018cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x380190: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380190u;
    {
        const bool branch_taken_0x380190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380190u;
        // 0x380194: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380190) {
            ctx->pc = 0x3801A8u;
            goto label_3801a8;
        }
    }
    ctx->pc = 0x380198u;
    // 0x380198: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x380198u;
    SET_GPR_U32(ctx, 31, 0x3801A0u);
    ctx->pc = 0x38019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380198u;
    // 0x38019c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x380198u, 0x3801A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3801A0u;
label_3801a0:
    // 0x3801a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3801A0u;
    {
        const bool branch_taken_0x3801a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3801A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801A0u;
        // 0x3801a4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3801a0) {
            ctx->pc = 0x3801D0u;
            goto label_3801d0;
        }
    }
    ctx->pc = 0x3801A8u;
label_3801a8:
    // 0x3801a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x3801a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x3801ac: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x3801acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x3801b0: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x3801b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x3801b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3801b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3801b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3801b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3801bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3801bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3801c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3801c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3801c4: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x3801c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3801c8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3801c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3801cc:
    // 0x3801cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3801ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3801d0:
    // 0x3801d0: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3801d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3801d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3801d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3801d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3801D8u;
    {
        const bool branch_taken_0x3801d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3801d8) {
            ctx->pc = 0x3801DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3801D8u;
            // 0x3801dc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3801F0u;
            goto label_3801f0;
        }
    }
    ctx->pc = 0x3801E0u;
    // 0x3801e0: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3801E0u;
    SET_GPR_U32(ctx, 31, 0x3801E8u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3801E0u, 0x3801E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3801E8u;
label_3801e8:
    // 0x3801e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3801E8u;
    {
        const bool branch_taken_0x3801e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3801ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801E8u;
        // 0x3801ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3801e8) {
            ctx->pc = 0x3801F8u;
            goto label_3801f8;
        }
    }
    ctx->pc = 0x3801F0u;
label_3801f0:
    // 0x3801f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3801f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3801f4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3801f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3801f8:
    // 0x3801f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3801f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3801fc:
    // 0x3801fc: 0xc0dfa36  jal         func_37E8D8
    ctx->pc = 0x3801FCu;
    SET_GPR_U32(ctx, 31, 0x380204u);
    ctx->pc = 0x380200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3801FCu;
    // 0x380200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E8D8u, 0x3801FCu, 0x380204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380204u;
label_380204:
    // 0x380204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380204u;
    {
        const bool branch_taken_0x380204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380204u;
        // 0x380208: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380204) {
            ctx->pc = 0x380214u;
            goto label_380214;
        }
    }
    ctx->pc = 0x38020Cu;
    // 0x38020c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x38020Cu;
    {
        const bool branch_taken_0x38020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38020Cu;
        // 0x380210: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38020c) {
            ctx->pc = 0x380268u;
            goto label_380268;
        }
    }
    ctx->pc = 0x380214u;
label_380214:
    // 0x380214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380218: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x380218u;
    {
        const bool branch_taken_0x380218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380218u;
        // 0x38021c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380218) {
            ctx->pc = 0x380268u;
            goto label_380268;
        }
    }
    ctx->pc = 0x380220u;
label_380220:
    // 0x380220: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x380220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x380224: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x380224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x380228: 0x246328c0  addiu       $v1, $v1, 0x28C0
    ctx->pc = 0x380228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10432));
    // 0x38022c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380230: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x380230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x380234: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x380234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x380238: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x380238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38023c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x380240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x380240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x380244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x380244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x380248: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380248u;
    SET_GPR_U32(ctx, 31, 0x380250u);
    ctx->pc = 0x38024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380248u;
    // 0x38024c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380248u, 0x380250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380250u;
label_380250:
    // 0x380250: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x380250u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x380254: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x380254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x380258: 0x24e7c328  addiu       $a3, $a3, -0x3CD8
    ctx->pc = 0x380258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951720));
    // 0x38025c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x38025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x380260: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x380260u;
    SET_GPR_U32(ctx, 31, 0x380268u);
    ctx->pc = 0x380264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380260u;
    // 0x380264: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x380260u, 0x380268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380268u;
label_380268:
    // 0x380268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x380268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38026c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38026cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380270: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x380270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380278: 0x3e00008  jr          $ra
    ctx->pc = 0x380278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380278u;
        // 0x38027c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380280u;
}
