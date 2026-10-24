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
// Function: SetPrintSaveData__6cMcSysii
// Address: 0x7c7fb0 - 0x7c80d8
void SetPrintSaveData__6cMcSysii_0x7c7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPrintSaveData__6cMcSysii_0x7c7fb0");
#endif

    switch (ctx->pc) {
        case 0x7c8008u: goto label_7c8008;
        case 0x7c8030u: goto label_7c8030;
        case 0x7c803cu: goto label_7c803c;
        case 0x7c804cu: goto label_7c804c;
        case 0x7c805cu: goto label_7c805c;
        case 0x7c806cu: goto label_7c806c;
        case 0x7c8098u: goto label_7c8098;
        default: break;
    }

    ctx->pc = 0x7c7fb0u;

    // 0x7c7fb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x7c7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x7c7fb4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x7c7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7c7fb8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7c7fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x7c7fbc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x7c7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x7c7fc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7c7fc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7fc4: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x7c7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x7c7fc8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7c7fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x7c7fcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7c7fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x7c7fd0: 0x24b50014  addiu       $s5, $a1, 0x14
    ctx->pc = 0x7c7fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x7c7fd4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7c7fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x7c7fd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x7c7fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7fdc: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x7c7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x7c7fe0: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x7c7fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c7fe4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7c7fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x7c7fe8: 0x27be0018  addiu       $fp, $sp, 0x18
    ctx->pc = 0x7c7fe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x7c7fec: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7c7fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x7c7ff0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7c7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x7c7ff4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7c7ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x7c7ff8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7c7ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7c7ffc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x7c7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x7c8000: 0x2b7001a  div         $zero, $s5, $s7
    ctx->pc = 0x7c8000u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c8004: 0x0  nop
    ctx->pc = 0x7c8004u;
    // NOP
label_7c8008:
    // 0x7c8008: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C8008u;
    {
        const bool branch_taken_0x7c8008 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c8008) {
            ctx->pc = 0x7C800Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C8008u;
            // 0x7c800c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8010u;
            goto label_7c8010;
        }
    }
    ctx->pc = 0x7C8010u;
label_7c8010:
    // 0x7c8010: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x7c8010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x7c8014: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x7c8014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8018: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x7c8018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c801c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7c801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8020: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x7c8020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x7c8024: 0x8010  mfhi        $s0
    ctx->pc = 0x7c8024u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x7c8028: 0xc1f23e8  jal         func_7C8FA0
    ctx->pc = 0x7C8028u;
    SET_GPR_U32(ctx, 31, 0x7C8030u);
    ctx->pc = 0x7C802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8028u;
    // 0x7c802c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8FA0u, 0x7C8028u, 0x7C8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8030u;
label_7c8030:
    // 0x7c8030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7c8030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8034: 0xc1f23d6  jal         func_7C8F58
    ctx->pc = 0x7C8034u;
    SET_GPR_U32(ctx, 31, 0x7C803Cu);
    ctx->pc = 0x7C8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8034u;
    // 0x7c8038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F58u, 0x7C8034u, 0x7C803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C803Cu;
label_7c803c:
    // 0x7c803c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c803cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7c8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8044: 0xc1f2518  jal         func_7C9460
    ctx->pc = 0x7C8044u;
    SET_GPR_U32(ctx, 31, 0x7C804Cu);
    ctx->pc = 0x7C8048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8044u;
    // 0x7c8048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9460u, 0x7C8044u, 0x7C804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C804Cu;
label_7c804c:
    // 0x7c804c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7c804cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7c8050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8054: 0xc1f252c  jal         func_7C94B0
    ctx->pc = 0x7C8054u;
    SET_GPR_U32(ctx, 31, 0x7C805Cu);
    ctx->pc = 0x7C8058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8054u;
    // 0x7c8058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C94B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C94B0u, 0x7C8054u, 0x7C805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C805Cu;
label_7c805c:
    // 0x7c805c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c805cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8060: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7c8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8064: 0xc1f253e  jal         func_7C94F8
    ctx->pc = 0x7C8064u;
    SET_GPR_U32(ctx, 31, 0x7C806Cu);
    ctx->pc = 0x7C8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8064u;
    // 0x7c8068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C94F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C94F8u, 0x7C8064u, 0x7C806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C806Cu;
label_7c806c:
    // 0x7c806c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x7c806cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8070: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x7c8070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8074: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x7c8074u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x7c8078: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7c8078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c807c: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x7c807cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x7c8080: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x7c8080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8084: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x7c8084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x7c8088: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x7c8088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c808c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x7c808cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x7c8090: 0xc1f2036  jal         func_7C80D8
    ctx->pc = 0x7C8090u;
    SET_GPR_U32(ctx, 31, 0x7C8098u);
    ctx->pc = 0x7C8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8090u;
    // 0x7c8094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C80D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C80D8u, 0x7C8090u, 0x7C8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8098u;
label_7c8098:
    // 0x7c8098: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x7c8098u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x7c809c: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x7c809cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c80a0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x7C80A0u;
    {
        const bool branch_taken_0x7c80a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c80a0) {
            ctx->pc = 0x7C80A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C80A0u;
            // 0x7c80a4: 0x2b7001a  div         $zero, $s5, $s7 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c8008;
        }
    }
    ctx->pc = 0x7C80A8u;
    // 0x7c80a8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7c80a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7c80ac: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7c80acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7c80b0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7c80b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7c80b4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7c80b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7c80b8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7c80b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c80bc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7c80bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c80c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7c80c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c80c4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7c80c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c80c8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7c80c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c80cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7c80ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c80d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C80D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C80D0u;
        // 0x7c80d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C80D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C80D8u;
}
} // namespace gh_mcport
