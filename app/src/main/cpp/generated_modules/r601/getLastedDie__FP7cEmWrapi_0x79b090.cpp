#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: getLastedDie__FP7cEmWrapi
// Address: 0x79b090 - 0x79b1c0
void getLastedDie__FP7cEmWrapi_0x79b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getLastedDie__FP7cEmWrapi_0x79b090");
#endif

    switch (ctx->pc) {
        case 0x79b0f8u: goto label_79b0f8;
        case 0x79b110u: goto label_79b110;
        case 0x79b128u: goto label_79b128;
        case 0x79b13cu: goto label_79b13c;
        case 0x79b180u: goto label_79b180;
        default: break;
    }

    ctx->pc = 0x79b090u;

    // 0x79b090: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79b094: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x79b098: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79b098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b09c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x79b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x79b0a0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x79b0a4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x79b0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x79b0a8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x79b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x79b0ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79b0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x79b0b0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x79b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x79b0b4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x79b0b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x79b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x79b0bc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x79b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x79b0c0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x79b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x79b0c4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x79b0c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0c8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79b0cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x79b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x79b0d0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x79b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x79b0d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79b0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79b0dc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x79b0dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0e0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x79b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x79b0e4: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x79b0e4u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x79b0e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0ec: 0x1a600008  blez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B0ECu;
    {
        const bool branch_taken_0x79b0ec = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0ECu;
        // 0x79b0f0: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0ec) {
            ctx->pc = 0x79B110u;
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B0F4u;
    // 0x79b0f4: 0x0  nop
    ctx->pc = 0x79b0f4u;
    // NOP
label_79b0f8:
    // 0x79b0f8: 0x2c41821  addu        $v1, $s6, $a0
    ctx->pc = 0x79b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x79b0fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x79b100: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x79b100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79b104: 0x0  nop
    ctx->pc = 0x79b104u;
    // NOP
    // 0x79b108: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79B108u;
    {
        const bool branch_taken_0x79b108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B108u;
        // 0x79b10c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b108) {
            ctx->pc = 0x79B0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0f8;
        }
    }
    ctx->pc = 0x79B110u;
label_79b110:
    // 0x79b110: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B110u;
    {
        const bool branch_taken_0x79b110 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x79B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B110u;
        // 0x79b114: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b110) {
            ctx->pc = 0x79B164u;
            goto label_79b164;
        }
    }
    ctx->pc = 0x79B118u;
    // 0x79b118: 0x8fd20000  lw          $s2, 0x0($fp)
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x79b11c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79b11cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b120: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79b120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b124: 0x0  nop
    ctx->pc = 0x79b124u;
    // NOP
label_79b128:
    // 0x79b128: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x79b128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b12c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B12Cu;
    {
        const bool branch_taken_0x79b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b12c) {
            ctx->pc = 0x79B130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B12Cu;
            // 0x79b130: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B154u;
            goto label_79b154;
        }
    }
    ctx->pc = 0x79B134u;
    // 0x79b134: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B134u;
    SET_GPR_U32(ctx, 31, 0x79B13Cu);
    ctx->pc = 0x79B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B134u;
    // 0x79b138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B134u, 0x79B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B13Cu;
label_79b13c:
    // 0x79b13c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B13Cu;
    {
        const bool branch_taken_0x79b13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b13c) {
            ctx->pc = 0x79B140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B13Cu;
            // 0x79b140: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B154u;
            goto label_79b154;
        }
    }
    ctx->pc = 0x79B144u;
    // 0x79b144: 0xa2150000  sb          $s5, 0x0($s0)
    ctx->pc = 0x79b144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x79b148: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x79b148u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b14c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79b14cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x79b150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79b150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79b154:
    // 0x79b154: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79b154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x79b158: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x79b158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79b15c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x79B15Cu;
    {
        const bool branch_taken_0x79b15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B15Cu;
        // 0x79b160: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b15c) {
            ctx->pc = 0x79B128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b128;
        }
    }
    ctx->pc = 0x79B164u;
label_79b164:
    // 0x79b164: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x79b164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x79b168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B168u;
    {
        const bool branch_taken_0x79b168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B168u;
        // 0x79b16c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b168) {
            ctx->pc = 0x79B188u;
            goto label_79b188;
        }
    }
    ctx->pc = 0x79B170u;
    // 0x79b170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b174: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79b178: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B178u;
    SET_GPR_U32(ctx, 31, 0x79B180u);
    ctx->pc = 0x79B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B178u;
    // 0x79b17c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B178u, 0x79B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B180u;
label_79b180:
    // 0x79b180: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x79B180u;
    {
        const bool branch_taken_0x79b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b180) {
            ctx->pc = 0x79B110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B188u;
label_79b188:
    // 0x79b188: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x79b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b18c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x79b18cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b190: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79b190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79b194: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x79b194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79b198: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x79b198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79b19c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x79b19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79b1a0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x79b1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b1a4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x79b1a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b1a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x79b1a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b1ac: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79b1acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b1b0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x79b1b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b1b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79b1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B8u;
        // 0x79b1bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B1C0u;
}
} // namespace gh_r601
