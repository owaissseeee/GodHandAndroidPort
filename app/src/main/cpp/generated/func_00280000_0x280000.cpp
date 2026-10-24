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

// Function: func_00280000
// Address: 0x280000 - 0x2801f8
void func_00280000_0x280000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280000_0x280000");
#endif

    switch (ctx->pc) {
        case 0x280040u: goto label_280040;
        case 0x280050u: goto label_280050;
        case 0x2800a8u: goto label_2800a8;
        case 0x280120u: goto label_280120;
        case 0x280150u: goto label_280150;
        case 0x280160u: goto label_280160;
        case 0x280188u: goto label_280188;
        case 0x28019cu: goto label_28019c;
        case 0x2801acu: goto label_2801ac;
        default: break;
    }

    ctx->pc = 0x280000u;

    // 0x280000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280004: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x280004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x280008: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x280008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28000c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28000cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280010: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x280010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x280014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280018: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x28001c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28001Cu;
    {
        const bool branch_taken_0x28001c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28001Cu;
        // 0x280020: 0x8e321580  lw          $s2, 0x1580($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28001c) {
            ctx->pc = 0x280038u;
            goto label_280038;
        }
    }
    ctx->pc = 0x280024u;
    // 0x280024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280028: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x280028u;
    {
        const bool branch_taken_0x280028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280028u;
        // 0x28002c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280028) {
            ctx->pc = 0x280194u;
            goto label_280194;
        }
    }
    ctx->pc = 0x280030u;
    // 0x280030: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x280030u;
    {
        const bool branch_taken_0x280030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280030u;
        // 0x280034: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280030) {
            ctx->pc = 0x2801E4u;
            goto label_2801e4;
        }
    }
    ctx->pc = 0x280038u;
label_280038:
    // 0x280038: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x280038u;
    SET_GPR_U32(ctx, 31, 0x280040u);
    ctx->pc = 0x28003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280038u;
    // 0x28003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x280038u, 0x280040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280040u;
label_280040:
    // 0x280040: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x280040u;
    {
        const bool branch_taken_0x280040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280040) {
            ctx->pc = 0x2800A0u;
            goto label_2800a0;
        }
    }
    ctx->pc = 0x280048u;
    // 0x280048: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x280048u;
    SET_GPR_U32(ctx, 31, 0x280050u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x280048u, 0x280050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280050u;
label_280050:
    // 0x280050: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x280050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x280054: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x280054u;
    {
        const bool branch_taken_0x280054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280054u;
        // 0x280058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280054) {
            ctx->pc = 0x280064u;
            goto label_280064;
        }
    }
    ctx->pc = 0x28005Cu;
    // 0x28005c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28005Cu;
    {
        const bool branch_taken_0x28005c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28005c) {
            ctx->pc = 0x280060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28005Cu;
            // 0x280060: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280084u;
            goto label_280084;
        }
    }
    ctx->pc = 0x280064u;
label_280064:
    // 0x280064: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x280064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28006c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28006cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280070: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280074: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x280074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x280078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28007c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28007Cu;
    {
        const bool branch_taken_0x28007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28007Cu;
        // 0x280080: 0x8c460114  lw          $a2, 0x114($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28007c) {
            ctx->pc = 0x280110u;
            goto label_280110;
        }
    }
    ctx->pc = 0x280084u;
label_280084:
    // 0x280084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280088: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28008c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28008cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280090: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x280094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280098: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x280098u;
    {
        const bool branch_taken_0x280098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280098u;
        // 0x28009c: 0x8c460114  lw          $a2, 0x114($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280098) {
            ctx->pc = 0x280110u;
            goto label_280110;
        }
    }
    ctx->pc = 0x2800A0u;
label_2800a0:
    // 0x2800a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2800A0u;
    SET_GPR_U32(ctx, 31, 0x2800A8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2800A0u, 0x2800A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800A8u;
label_2800a8:
    // 0x2800a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2800ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2800acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2800b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2800b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2800b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2800B4u;
    {
        const bool branch_taken_0x2800b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2800b4) {
            ctx->pc = 0x2800B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800B4u;
            // 0x2800b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800BCu;
            goto label_2800bc;
        }
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0x2810  mfhi        $a1
    ctx->pc = 0x2800bcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2800c0: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2800C0u;
    {
        const bool branch_taken_0x2800c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2800c0) {
            ctx->pc = 0x2800C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800C0u;
            // 0x2800c4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2800F8u;
            goto label_2800f8;
        }
    }
    ctx->pc = 0x2800C8u;
    // 0x2800c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2800C8u;
    {
        const bool branch_taken_0x2800c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800C8u;
        // 0x2800cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800c8) {
            ctx->pc = 0x2800D8u;
            goto label_2800d8;
        }
    }
    ctx->pc = 0x2800D0u;
    // 0x2800d0: 0x50a20015  beql        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2800D0u;
    {
        const bool branch_taken_0x2800d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2800d0) {
            ctx->pc = 0x2800D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2800D0u;
            // 0x2800d4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280128u;
            goto label_280128;
        }
    }
    ctx->pc = 0x2800D8u;
label_2800d8:
    // 0x2800d8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2800d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2800dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2800dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2800e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2800e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2800e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2800e8: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2800ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2800ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2800F0u;
    {
        const bool branch_taken_0x2800f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800F0u;
        // 0x2800f4: 0x8c4600d4  lw          $a2, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800f0) {
            ctx->pc = 0x280110u;
            goto label_280110;
        }
    }
    ctx->pc = 0x2800F8u;
label_2800f8:
    // 0x2800f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2800f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2800fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280100: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280104: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x280104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x280108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28010c: 0x8c4600dc  lw          $a2, 0xDC($v0)
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_280110:
    // 0x280110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280114: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280118: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280118u;
    SET_GPR_U32(ctx, 31, 0x280120u);
    ctx->pc = 0x28011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280118u;
    // 0x28011c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280118u, 0x280120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280120u;
label_280120:
    // 0x280120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x280120u;
    {
        const bool branch_taken_0x280120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280120u;
        // 0x280124: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280120) {
            ctx->pc = 0x280154u;
            goto label_280154;
        }
    }
    ctx->pc = 0x280128u;
label_280128:
    // 0x280128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28012c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28012cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280130: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280134: 0x8c4500e0  lw          $a1, 0xE0($v0)
    ctx->pc = 0x280134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x280138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28013c: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x280140: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280144: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x280144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280148: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280148u;
    SET_GPR_U32(ctx, 31, 0x280150u);
    ctx->pc = 0x28014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280148u;
    // 0x28014c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280148u, 0x280150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280150u;
label_280150:
    // 0x280150: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x280150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_280154:
    // 0x280154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280158: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x280158u;
    SET_GPR_U32(ctx, 31, 0x280160u);
    ctx->pc = 0x28015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280158u;
    // 0x28015c: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x280158u, 0x280160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280160u;
label_280160:
    // 0x280160: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x280164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280168: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x280168u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x28016c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280170: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x280170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280178: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280178u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28017c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28017cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280180: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x280180u;
    SET_GPR_U32(ctx, 31, 0x280188u);
    ctx->pc = 0x280184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280180u;
    // 0x280184: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x280180u, 0x280188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280188u;
label_280188:
    // 0x280188: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x28018c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28018cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280190: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x280190u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_280194:
    // 0x280194: 0xc055f06  jal         func_157C18
    ctx->pc = 0x280194u;
    SET_GPR_U32(ctx, 31, 0x28019Cu);
    ctx->pc = 0x280198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280194u;
    // 0x280198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x280194u, 0x28019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28019Cu;
label_28019c:
    // 0x28019c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28019Cu;
    {
        const bool branch_taken_0x28019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28019Cu;
        // 0x2801a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28019c) {
            ctx->pc = 0x2801E0u;
            goto label_2801e0;
        }
    }
    ctx->pc = 0x2801A4u;
    // 0x2801a4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2801A4u;
    SET_GPR_U32(ctx, 31, 0x2801ACu);
    ctx->pc = 0x2801A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801A4u;
    // 0x2801a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2801A4u, 0x2801ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801ACu;
label_2801ac:
    // 0x2801ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2801ACu;
    {
        const bool branch_taken_0x2801ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801ACu;
        // 0x2801b0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801ac) {
            ctx->pc = 0x2801CCu;
            goto label_2801cc;
        }
    }
    ctx->pc = 0x2801B4u;
    // 0x2801b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2801b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2801b8: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2801b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2801bc: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2801bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2801c0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2801c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2801c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2801C4u;
    {
        const bool branch_taken_0x2801c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2801C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801C4u;
        // 0x2801c8: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2801c4) {
            ctx->pc = 0x2801DCu;
            goto label_2801dc;
        }
    }
    ctx->pc = 0x2801CCu;
label_2801cc:
    // 0x2801cc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2801ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2801d0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2801d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2801d4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x2801d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2801d8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2801d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2801dc:
    // 0x2801dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2801dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2801e0:
    // 0x2801e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2801e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2801e4:
    // 0x2801e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2801e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2801e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2801e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2801ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2801ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2801F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2801ECu;
        // 0x2801f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2801ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2801F4u;
    // 0x2801f4: 0x0  nop
    ctx->pc = 0x2801f4u;
    // NOP
    ctx->pc = 0x2801f8u;
}
