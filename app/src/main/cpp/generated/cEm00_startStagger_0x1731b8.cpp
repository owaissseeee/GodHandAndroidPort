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

// Function: cEm00_startStagger
// Address: 0x1731b8 - 0x173258
void cEm00_startStagger_0x1731b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_startStagger_0x1731b8");
#endif

    switch (ctx->pc) {
        case 0x1731b8u: goto label_1731b8;
        case 0x1731bcu: goto label_1731bc;
        case 0x1731c0u: goto label_1731c0;
        case 0x1731c4u: goto label_1731c4;
        case 0x1731c8u: goto label_1731c8;
        case 0x1731ccu: goto label_1731cc;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731d4u: goto label_1731d4;
        case 0x1731d8u: goto label_1731d8;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731e0u: goto label_1731e0;
        case 0x1731e4u: goto label_1731e4;
        case 0x1731e8u: goto label_1731e8;
        case 0x1731ecu: goto label_1731ec;
        case 0x1731f0u: goto label_1731f0;
        case 0x1731f4u: goto label_1731f4;
        case 0x1731f8u: goto label_1731f8;
        case 0x1731fcu: goto label_1731fc;
        case 0x173200u: goto label_173200;
        case 0x173204u: goto label_173204;
        case 0x173208u: goto label_173208;
        case 0x17320cu: goto label_17320c;
        case 0x173210u: goto label_173210;
        case 0x173214u: goto label_173214;
        case 0x173218u: goto label_173218;
        case 0x17321cu: goto label_17321c;
        case 0x173220u: goto label_173220;
        case 0x173224u: goto label_173224;
        case 0x173228u: goto label_173228;
        case 0x17322cu: goto label_17322c;
        case 0x173230u: goto label_173230;
        case 0x173234u: goto label_173234;
        case 0x173238u: goto label_173238;
        case 0x17323cu: goto label_17323c;
        case 0x173240u: goto label_173240;
        case 0x173244u: goto label_173244;
        case 0x173248u: goto label_173248;
        case 0x17324cu: goto label_17324c;
        case 0x173250u: goto label_173250;
        case 0x173254u: goto label_173254;
        default: break;
    }

    ctx->pc = 0x1731b8u;

label_1731b8:
    // 0x1731b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1731bc:
    // 0x1731bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1731bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1731c0:
    // 0x1731c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1731c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1731c4:
    // 0x1731c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1731c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1731c8:
    // 0x1731c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1731c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1731cc:
    // 0x1731cc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1731d0:
    // 0x1731d0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1731d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1731d4:
    // 0x1731d4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1731d8:
    // 0x1731d8: 0x40f809  jalr        $v0
label_1731dc:
    if (ctx->pc == 0x1731DCu) {
        ctx->pc = 0x1731DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731D8u;
        // 0x1731dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1731E0u;
        goto label_1731e0;
    }
    ctx->pc = 0x1731D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1731E0u);
        ctx->pc = 0x1731DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1731D8u;
        // 0x1731dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1731D8u, 0x1731E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1731E0u;
label_1731e0:
    // 0x1731e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1731e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1731e4:
    // 0x1731e4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1731e8:
    // 0x1731e8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1731e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1731ec:
    // 0x1731ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1731f0:
    // 0x1731f0: 0xe6200da4  swc1        $f0, 0xDA4($s1)
    ctx->pc = 0x1731f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3492), bits); }
label_1731f4:
    // 0x1731f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1731f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1731f8:
    // 0x1731f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1731f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1731fc:
    // 0x1731fc: 0xa6220da0  sh          $v0, 0xDA0($s1)
    ctx->pc = 0x1731fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3488), (uint16_t)GPR_U32(ctx, 2));
label_173200:
    // 0x173200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_173204:
    // 0x173204: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_173208:
    // 0x173208: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17320c:
    // 0x17320c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17320cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173210:
    // 0x173210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x173210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173214:
    // 0x173214: 0xc0b2e92  jal         func_2CBA48
label_173218:
    if (ctx->pc == 0x173218u) {
        ctx->pc = 0x173218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173214u;
        // 0x173218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17321Cu;
        goto label_17321c;
    }
    ctx->pc = 0x173214u;
    SET_GPR_U32(ctx, 31, 0x17321Cu);
    ctx->pc = 0x173218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173214u;
    // 0x173218: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x173214u, 0x17321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17321Cu;
label_17321c:
    // 0x17321c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173220:
    // 0x173220: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x173220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173224:
    // 0x173224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173228:
    // 0x173228: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17322c:
    // 0x17322c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17322cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173230:
    // 0x173230: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173230u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173234:
    // 0x173234: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173238:
    // 0x173238: 0xc0b2e92  jal         func_2CBA48
label_17323c:
    if (ctx->pc == 0x17323Cu) {
        ctx->pc = 0x17323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173238u;
        // 0x17323c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173240u;
        goto label_173240;
    }
    ctx->pc = 0x173238u;
    SET_GPR_U32(ctx, 31, 0x173240u);
    ctx->pc = 0x17323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173238u;
    // 0x17323c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x173238u, 0x173240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173240u;
label_173240:
    // 0x173240: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_173244:
    // 0x173244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_173248:
    // 0x173248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17324c:
    // 0x17324c: 0x3e00008  jr          $ra
label_173250:
    if (ctx->pc == 0x173250u) {
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17324Cu;
        // 0x173250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173254u;
        goto label_173254;
    }
    ctx->pc = 0x17324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17324Cu;
        // 0x173250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173254u;
label_173254:
    // 0x173254: 0x0  nop
    ctx->pc = 0x173254u;
    // NOP
    ctx->pc = 0x173258u;
}
