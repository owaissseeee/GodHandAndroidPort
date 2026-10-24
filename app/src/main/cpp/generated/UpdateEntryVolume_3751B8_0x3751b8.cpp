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

// Function: UpdateEntryVolume_3751B8
// Address: 0x3751b8 - 0x3752a0
void UpdateEntryVolume_3751B8_0x3751b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateEntryVolume_3751B8_0x3751b8");
#endif

    switch (ctx->pc) {
        case 0x375218u: goto label_375218;
        case 0x375260u: goto label_375260;
        default: break;
    }

    ctx->pc = 0x3751b8u;

    // 0x3751b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3751b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3751bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3751bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3751c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3751c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3751c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3751c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3751c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3751c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3751cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3751ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3751d0: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x3751d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x3751d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3751d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3751d8: 0x2484df10  addiu       $a0, $a0, -0x20F0
    ctx->pc = 0x3751d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958864));
    // 0x3751dc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x3751dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3751e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3751e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3751e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3751e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3751e8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3751ec: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3751ECu;
    {
        const bool branch_taken_0x3751ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3751F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751ECu;
        // 0x3751f0: 0x58c03  sra         $s1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751ec) {
            ctx->pc = 0x375280u;
            goto label_375280;
        }
    }
    ctx->pc = 0x3751F4u;
    // 0x3751f4: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3751f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3751f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3751f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3751fc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3751FCu;
    {
        const bool branch_taken_0x3751fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3751FCu;
        // 0x375200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3751fc) {
            ctx->pc = 0x375284u;
            goto label_375284;
        }
    }
    ctx->pc = 0x375204u;
    // 0x375204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x375208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37520c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375210: 0xc0de07e  jal         func_3781F8
    ctx->pc = 0x375210u;
    SET_GPR_U32(ctx, 31, 0x375218u);
    ctx->pc = 0x375214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375210u;
    // 0x375214: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781F8u, 0x375210u, 0x375218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375218u;
label_375218:
    // 0x375218: 0x5052001a  beql        $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x375218u;
    {
        const bool branch_taken_0x375218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x375218) {
            ctx->pc = 0x37521Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375218u;
            // 0x37521c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375284u;
            goto label_375284;
        }
    }
    ctx->pc = 0x375220u;
    // 0x375220: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x375220u;
    {
        const bool branch_taken_0x375220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375220u;
        // 0x375224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375220) {
            ctx->pc = 0x375254u;
            goto label_375254;
        }
    }
    ctx->pc = 0x375228u;
    // 0x375228: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x375228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37522c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x37522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x375230: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x375230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x375234: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x375234u;
    {
        const bool branch_taken_0x375234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375234) {
            ctx->pc = 0x375238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375234u;
            // 0x375238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37523Cu;
            goto label_37523c;
        }
    }
    ctx->pc = 0x37523Cu;
label_37523c:
    // 0x37523c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x37523cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x375240: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x375240u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x375244: 0x1012  mflo        $v0
    ctx->pc = 0x375244u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x375248: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x375248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x37524c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x37524cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x375250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_375254:
    // 0x375254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x375254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375258: 0xc0de0e6  jal         func_378398
    ctx->pc = 0x375258u;
    SET_GPR_U32(ctx, 31, 0x375260u);
    ctx->pc = 0x37525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375258u;
    // 0x37525c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378398u, 0x375258u, 0x375260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375260u;
label_375260:
    // 0x375260: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x375260u;
    {
        const bool branch_taken_0x375260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x375260) {
            ctx->pc = 0x375270u;
            goto label_375270;
        }
    }
    ctx->pc = 0x375268u;
    // 0x375268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x375268u;
    {
        const bool branch_taken_0x375268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375268u;
        // 0x37526c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375268) {
            ctx->pc = 0x375284u;
            goto label_375284;
        }
    }
    ctx->pc = 0x375270u;
label_375270:
    // 0x375270: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375270u;
    {
        const bool branch_taken_0x375270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375270u;
        // 0x375274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375270) {
            ctx->pc = 0x375284u;
            goto label_375284;
        }
    }
    ctx->pc = 0x375278u;
    // 0x375278: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x375278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37527c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x37527cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_375280:
    // 0x375280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375284:
    // 0x375284: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x375284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375288: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x375288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37528c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37528cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x375290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375294: 0x3e00008  jr          $ra
    ctx->pc = 0x375294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375294u;
        // 0x375298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37529Cu;
    // 0x37529c: 0x0  nop
    ctx->pc = 0x37529cu;
    // NOP
    ctx->pc = 0x3752a0u;
}
