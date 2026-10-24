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
// Function: complete__7cMcSave
// Address: 0x7c6458 - 0x7c6578
void complete__7cMcSave_0x7c6458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("complete__7cMcSave_0x7c6458");
#endif

    switch (ctx->pc) {
        case 0x7c64e0u: goto label_7c64e0;
        case 0x7c6504u: goto label_7c6504;
        default: break;
    }

    ctx->pc = 0x7c6458u;

    // 0x7c6458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c6458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c645c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c6460: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c6460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c6464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c6464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c6468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c646c: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c6470: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6470u;
    {
        const bool branch_taken_0x7c6470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6470u;
        // 0x7c6474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6470) {
            ctx->pc = 0x7C6488u;
            goto label_7c6488;
        }
    }
    ctx->pc = 0x7C6478u;
    // 0x7c6478: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x7C6478u;
    {
        const bool branch_taken_0x7c6478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6478u;
        // 0x7c647c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6478) {
            ctx->pc = 0x7C6520u;
            goto label_7c6520;
        }
    }
    ctx->pc = 0x7C6480u;
    // 0x7c6480: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x7C6480u;
    {
        const bool branch_taken_0x7c6480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6480u;
        // 0x7c6484: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6480) {
            ctx->pc = 0x7C6568u;
            goto label_7c6568;
        }
    }
    ctx->pc = 0x7C6488u;
label_7c6488:
    // 0x7c6488: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x7c6488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x7c648c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x7c648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c6490: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x7c6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c6494: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C6494u;
    {
        const bool branch_taken_0x7c6494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c6494) {
            ctx->pc = 0x7C6498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6494u;
            // 0x7c6498: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C649Cu;
            goto label_7c649c;
        }
    }
    ctx->pc = 0x7C649Cu;
label_7c649c:
    // 0x7c649c: 0x8e280120  lw          $t0, 0x120($s1)
    ctx->pc = 0x7c649cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x7c64a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7c64a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c64a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7c64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7c64a8: 0x8e290124  lw          $t1, 0x124($s1)
    ctx->pc = 0x7c64a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x7c64ac: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x7c64acu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c64b0: 0x8e2a0128  lw          $t2, 0x128($s1)
    ctx->pc = 0x7c64b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x7c64b4: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c64b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c64b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c64bc: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x7c64bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c64c0: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x7c64c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7c64c4: 0x806b0010  lb          $t3, 0x10($v1)
    ctx->pc = 0x7c64c4u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c64c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c64cc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x7c64ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x7c64d0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x7c64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x7c64d4: 0x3010  mfhi        $a2
    ctx->pc = 0x7c64d4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x7c64d8: 0xc1f2036  jal         func_7C80D8
    ctx->pc = 0x7C64D8u;
    SET_GPR_U32(ctx, 31, 0x7C64E0u);
    ctx->pc = 0x7C64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C64D8u;
    // 0x7c64dc: 0x8c670004  lw          $a3, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C80D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C80D8u, 0x7C64D8u, 0x7C64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C64E0u;
label_7c64e0:
    // 0x7c64e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x7c64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x7c64e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c64e8: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x7c64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x7c64ec: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x7c64ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x7c64f0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x7c64f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E6910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E6910u, _value); } while (0);
    // 0x7c64f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c64f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c64f8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x7c64f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E690Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E690Cu, _value); } while (0);
    // 0x7c64fc: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C64FCu;
    SET_GPR_U32(ctx, 31, 0x7C6504u);
    ctx->pc = 0x7C6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C64FCu;
    // 0x7c6500: 0xae2500e8  sw          $a1, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C64FCu, 0x7C6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6504u;
label_7c6504:
    // 0x7c6504: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c6504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c6508: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7c6508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7c650c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6510: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x7c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x7c6514: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7c6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7c6518: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x7c6518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x7c651c: 0xae2400f4  sw          $a0, 0xF4($s1)
    ctx->pc = 0x7c651cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 4));
label_7c6520:
    // 0x7c6520: 0x8e2500e8  lw          $a1, 0xE8($s1)
    ctx->pc = 0x7c6520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x7c6524: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C6524u;
    {
        const bool branch_taken_0x7c6524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6524u;
        // 0x7c6528: 0x28a20050  slti        $v0, $a1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6524) {
            ctx->pc = 0x7C654Cu;
            goto label_7c654c;
        }
    }
    ctx->pc = 0x7C652Cu;
    // 0x7c652c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7C652Cu;
    {
        const bool branch_taken_0x7c652c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C652Cu;
        // 0x7c6530: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c652c) {
            ctx->pc = 0x7C6558u;
            goto label_7c6558;
        }
    }
    ctx->pc = 0x7C6534u;
    // 0x7c6534: 0x34048030  ori         $a0, $zero, 0x8030
    ctx->pc = 0x7c6534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x7c6538: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x7c6538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x7c653c: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x7c653cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x7c6540: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c6540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c6544: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6544u;
    {
        const bool branch_taken_0x7c6544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6544u;
        // 0x7c6548: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6544) {
            ctx->pc = 0x7C655Cu;
            goto label_7c655c;
        }
    }
    ctx->pc = 0x7C654Cu;
label_7c654c:
    // 0x7c654c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6550u;
    {
        const bool branch_taken_0x7c6550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6550u;
        // 0x7c6554: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6550) {
            ctx->pc = 0x7C6560u;
            goto label_7c6560;
        }
    }
    ctx->pc = 0x7C6558u;
label_7c6558:
    // 0x7c6558: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x7c6558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_7c655c:
    // 0x7c655c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x7c655cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_7c6560:
    // 0x7c6560: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c6560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c6564: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c6564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7c6568:
    // 0x7c6568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c6568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c656c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C656Cu;
        // 0x7c6570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6574u;
    // 0x7c6574: 0x0  nop
    ctx->pc = 0x7c6574u;
    // NOP
    ctx->pc = 0x7c6578u;
}
} // namespace gh_mcport
