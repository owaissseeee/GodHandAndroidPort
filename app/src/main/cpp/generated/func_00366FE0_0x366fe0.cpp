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

// Function: func_00366FE0
// Address: 0x366fe0 - 0x3670e8
void func_00366FE0_0x366fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366FE0_0x366fe0");
#endif

    switch (ctx->pc) {
        case 0x366fe0u: goto label_366fe0;
        case 0x366fe4u: goto label_366fe4;
        case 0x366fe8u: goto label_366fe8;
        case 0x366fecu: goto label_366fec;
        case 0x366ff0u: goto label_366ff0;
        case 0x366ff4u: goto label_366ff4;
        case 0x366ff8u: goto label_366ff8;
        case 0x366ffcu: goto label_366ffc;
        case 0x367000u: goto label_367000;
        case 0x367004u: goto label_367004;
        case 0x367008u: goto label_367008;
        case 0x36700cu: goto label_36700c;
        case 0x367010u: goto label_367010;
        case 0x367014u: goto label_367014;
        case 0x367018u: goto label_367018;
        case 0x36701cu: goto label_36701c;
        case 0x367020u: goto label_367020;
        case 0x367024u: goto label_367024;
        case 0x367028u: goto label_367028;
        case 0x36702cu: goto label_36702c;
        case 0x367030u: goto label_367030;
        case 0x367034u: goto label_367034;
        case 0x367038u: goto label_367038;
        case 0x36703cu: goto label_36703c;
        case 0x367040u: goto label_367040;
        case 0x367044u: goto label_367044;
        case 0x367048u: goto label_367048;
        case 0x36704cu: goto label_36704c;
        case 0x367050u: goto label_367050;
        case 0x367054u: goto label_367054;
        case 0x367058u: goto label_367058;
        case 0x36705cu: goto label_36705c;
        case 0x367060u: goto label_367060;
        case 0x367064u: goto label_367064;
        case 0x367068u: goto label_367068;
        case 0x36706cu: goto label_36706c;
        case 0x367070u: goto label_367070;
        case 0x367074u: goto label_367074;
        case 0x367078u: goto label_367078;
        case 0x36707cu: goto label_36707c;
        case 0x367080u: goto label_367080;
        case 0x367084u: goto label_367084;
        case 0x367088u: goto label_367088;
        case 0x36708cu: goto label_36708c;
        case 0x367090u: goto label_367090;
        case 0x367094u: goto label_367094;
        case 0x367098u: goto label_367098;
        case 0x36709cu: goto label_36709c;
        case 0x3670a0u: goto label_3670a0;
        case 0x3670a4u: goto label_3670a4;
        case 0x3670a8u: goto label_3670a8;
        case 0x3670acu: goto label_3670ac;
        case 0x3670b0u: goto label_3670b0;
        case 0x3670b4u: goto label_3670b4;
        case 0x3670b8u: goto label_3670b8;
        case 0x3670bcu: goto label_3670bc;
        case 0x3670c0u: goto label_3670c0;
        case 0x3670c4u: goto label_3670c4;
        case 0x3670c8u: goto label_3670c8;
        case 0x3670ccu: goto label_3670cc;
        case 0x3670d0u: goto label_3670d0;
        case 0x3670d4u: goto label_3670d4;
        case 0x3670d8u: goto label_3670d8;
        case 0x3670dcu: goto label_3670dc;
        case 0x3670e0u: goto label_3670e0;
        case 0x3670e4u: goto label_3670e4;
        default: break;
    }

    ctx->pc = 0x366fe0u;

label_366fe0:
    // 0x366fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_366fe4:
    // 0x366fe4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_366fe8:
    // 0x366fe8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x366fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_366fec:
    // 0x366fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_366ff0:
    // 0x366ff0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x366ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_366ff4:
    // 0x366ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_366ff8:
    // 0x366ff8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x366ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_366ffc:
    // 0x366ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_367000:
    // 0x367000: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x367000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_367004:
    // 0x367004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x367004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_367008:
    // 0x367008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36700c:
    // 0x36700c: 0xc0da28a  jal         func_368A28
label_367010:
    if (ctx->pc == 0x367010u) {
        ctx->pc = 0x367010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36700Cu;
        // 0x367010: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367014u;
        goto label_367014;
    }
    ctx->pc = 0x36700Cu;
    SET_GPR_U32(ctx, 31, 0x367014u);
    ctx->pc = 0x367010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36700Cu;
    // 0x367010: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x36700Cu, 0x367014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367014u;
label_367014:
    // 0x367014: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x367014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_367018:
    // 0x367018: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x367018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_36701c:
    // 0x36701c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_367020:
    // 0x367020: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_367024:
    if (ctx->pc == 0x367024u) {
        ctx->pc = 0x367024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367020u;
        // 0x367024: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367028u;
        goto label_367028;
    }
    ctx->pc = 0x367020u;
    {
        const bool branch_taken_0x367020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x367024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367020u;
        // 0x367024: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367020) {
            ctx->pc = 0x367078u;
            goto label_367078;
        }
    }
    ctx->pc = 0x367028u;
label_367028:
    // 0x367028: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x367028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_36702c:
    // 0x36702c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_367030:
    if (ctx->pc == 0x367030u) {
        ctx->pc = 0x367030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36702Cu;
        // 0x367030: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367034u;
        goto label_367034;
    }
    ctx->pc = 0x36702Cu;
    {
        const bool branch_taken_0x36702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36702Cu;
        // 0x367030: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36702c) {
            ctx->pc = 0x367048u;
            goto label_367048;
        }
    }
    ctx->pc = 0x367034u;
label_367034:
    // 0x367034: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x367034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_367038:
    // 0x367038: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_36703c:
    if (ctx->pc == 0x36703Cu) {
        ctx->pc = 0x36703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367038u;
        // 0x36703c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367040u;
        goto label_367040;
    }
    ctx->pc = 0x367038u;
    {
        const bool branch_taken_0x367038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367038u;
        // 0x36703c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367038) {
            ctx->pc = 0x367058u;
            goto label_367058;
        }
    }
    ctx->pc = 0x367040u;
label_367040:
    // 0x367040: 0x10000023  b           . + 4 + (0x23 << 2)
label_367044:
    if (ctx->pc == 0x367044u) {
        ctx->pc = 0x367044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367040u;
        // 0x367044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367048u;
        goto label_367048;
    }
    ctx->pc = 0x367040u;
    {
        const bool branch_taken_0x367040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367040u;
        // 0x367044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367040) {
            ctx->pc = 0x3670D0u;
            goto label_3670d0;
        }
    }
    ctx->pc = 0x367048u;
label_367048:
    // 0x367048: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_36704c:
    if (ctx->pc == 0x36704Cu) {
        ctx->pc = 0x36704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367048u;
        // 0x36704c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367050u;
        goto label_367050;
    }
    ctx->pc = 0x367048u;
    {
        const bool branch_taken_0x367048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x36704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367048u;
        // 0x36704c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367048) {
            ctx->pc = 0x367098u;
            goto label_367098;
        }
    }
    ctx->pc = 0x367050u;
label_367050:
    // 0x367050: 0x1000001f  b           . + 4 + (0x1F << 2)
label_367054:
    if (ctx->pc == 0x367054u) {
        ctx->pc = 0x367054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367050u;
        // 0x367054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367058u;
        goto label_367058;
    }
    ctx->pc = 0x367050u;
    {
        const bool branch_taken_0x367050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367050u;
        // 0x367054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367050) {
            ctx->pc = 0x3670D0u;
            goto label_3670d0;
        }
    }
    ctx->pc = 0x367058u;
label_367058:
    // 0x367058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36705c:
    // 0x36705c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36705cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_367060:
    // 0x367060: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x367060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_367064:
    // 0x367064: 0xc0d9c3a  jal         func_3670E8
label_367068:
    if (ctx->pc == 0x367068u) {
        ctx->pc = 0x367068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367064u;
        // 0x367068: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36706Cu;
        goto label_36706c;
    }
    ctx->pc = 0x367064u;
    SET_GPR_U32(ctx, 31, 0x36706Cu);
    ctx->pc = 0x367068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367064u;
    // 0x367068: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3670E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3670E8u, 0x367064u, 0x36706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36706Cu;
label_36706c:
    // 0x36706c: 0x10000017  b           . + 4 + (0x17 << 2)
label_367070:
    if (ctx->pc == 0x367070u) {
        ctx->pc = 0x367070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36706Cu;
        // 0x367070: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367074u;
        goto label_367074;
    }
    ctx->pc = 0x36706Cu;
    {
        const bool branch_taken_0x36706c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36706Cu;
        // 0x367070: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36706c) {
            ctx->pc = 0x3670CCu;
            goto label_3670cc;
        }
    }
    ctx->pc = 0x367074u;
label_367074:
    // 0x367074: 0x0  nop
    ctx->pc = 0x367074u;
    // NOP
label_367078:
    // 0x367078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36707c:
    // 0x36707c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36707cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_367080:
    // 0x367080: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x367080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_367084:
    // 0x367084: 0xc0d9d54  jal         func_367550
label_367088:
    if (ctx->pc == 0x367088u) {
        ctx->pc = 0x367088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367084u;
        // 0x367088: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36708Cu;
        goto label_36708c;
    }
    ctx->pc = 0x367084u;
    SET_GPR_U32(ctx, 31, 0x36708Cu);
    ctx->pc = 0x367088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367084u;
    // 0x367088: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367550u, 0x367084u, 0x36708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36708Cu;
label_36708c:
    // 0x36708c: 0x1000000f  b           . + 4 + (0xF << 2)
label_367090:
    if (ctx->pc == 0x367090u) {
        ctx->pc = 0x367090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36708Cu;
        // 0x367090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x367094u;
        goto label_367094;
    }
    ctx->pc = 0x36708Cu;
    {
        const bool branch_taken_0x36708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36708Cu;
        // 0x367090: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36708c) {
            ctx->pc = 0x3670CCu;
            goto label_3670cc;
        }
    }
    ctx->pc = 0x367094u;
label_367094:
    // 0x367094: 0x0  nop
    ctx->pc = 0x367094u;
    // NOP
label_367098:
    // 0x367098: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x367098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_36709c:
    // 0x36709c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36709cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3670a0:
    // 0x3670a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3670a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3670a4:
    // 0x3670a4: 0xc0d9f70  jal         func_367DC0
label_3670a8:
    if (ctx->pc == 0x3670A8u) {
        ctx->pc = 0x3670A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670A4u;
        // 0x3670a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3670ACu;
        goto label_3670ac;
    }
    ctx->pc = 0x3670A4u;
    SET_GPR_U32(ctx, 31, 0x3670ACu);
    ctx->pc = 0x3670A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3670A4u;
    // 0x3670a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367DC0u, 0x3670A4u, 0x3670ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3670ACu;
label_3670ac:
    // 0x3670ac: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x3670acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_3670b0:
    // 0x3670b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3670b4:
    if (ctx->pc == 0x3670B4u) {
        ctx->pc = 0x3670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670B0u;
        // 0x3670b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3670B8u;
        goto label_3670b8;
    }
    ctx->pc = 0x3670B0u;
    {
        const bool branch_taken_0x3670b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3670b0) {
            ctx->pc = 0x3670B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3670B0u;
            // 0x3670b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3670CCu;
            goto label_3670cc;
        }
    }
    ctx->pc = 0x3670B8u;
label_3670b8:
    // 0x3670b8: 0xde2600a8  ld          $a2, 0xA8($s1)
    ctx->pc = 0x3670b8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 168)));
label_3670bc:
    // 0x3670bc: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x3670bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_3670c0:
    // 0x3670c0: 0x40f809  jalr        $v0
label_3670c4:
    if (ctx->pc == 0x3670C4u) {
        ctx->pc = 0x3670C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670C0u;
        // 0x3670c4: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3670C8u;
        goto label_3670c8;
    }
    ctx->pc = 0x3670C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3670C8u);
        ctx->pc = 0x3670C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670C0u;
        // 0x3670c4: 0x922500b8  lbu         $a1, 0xB8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3670C0u, 0x3670C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3670C8u;
label_3670c8:
    // 0x3670c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3670c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3670cc:
    // 0x3670cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3670ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3670d0:
    // 0x3670d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3670d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3670d4:
    // 0x3670d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3670d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3670d8:
    // 0x3670d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3670d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3670dc:
    // 0x3670dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3670dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3670e0:
    // 0x3670e0: 0x3e00008  jr          $ra
label_3670e4:
    if (ctx->pc == 0x3670E4u) {
        ctx->pc = 0x3670E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670E0u;
        // 0x3670e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3670E8u;
        goto label_fallthrough_0x3670e0;
    }
    ctx->pc = 0x3670E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3670E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670E0u;
        // 0x3670e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3670E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3670e0:
    ctx->pc = 0x3670E8u;
}
