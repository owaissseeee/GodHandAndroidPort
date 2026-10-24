#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: R022Init__Fv
// Address: 0x799220 - 0x799340
void R022Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R022Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x79925cu: goto label_79925c;
        case 0x799274u: goto label_799274;
        case 0x7992fcu: goto label_7992fc;
        case 0x799310u: goto label_799310;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x3c120004  lui         $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799248: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799254: 0xc1e6510  jal         func_799440
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0xae30cd8c  sw          $s0, -0x3274($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954380), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799440u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799260: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799264: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799268: 0x24a59370  addiu       $a1, $a1, -0x6C90
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939504));
    // 0x79926c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79926Cu;
    // 0x799270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x799278: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x79927c: 0x25107a78  addiu       $s0, $t0, 0x7A78
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 31352));
    // 0x799280: 0x8d037a78  lw          $v1, 0x7A78($t0)
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x799284: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x799288: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x79928c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x799290: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799294: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799298: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79929c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7992a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7992a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7992a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7992a8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x7992ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7992b0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x7992b4: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x7992b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x7992bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7992c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x7992c4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7992c8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x7992cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7992d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7992d4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7992d8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x7992d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x7992dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x7992dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x7992e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x7992e4: 0xad037a78  sw          $v1, 0x7A78($t0)
    ctx->pc = 0x7992e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x7992e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f4: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x799314: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799318: 0xa460cd90  sh          $zero, -0x3270($v1)
    ctx->pc = 0x799318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79CD90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x79CD90u, _value); } while (0);
    // 0x79931c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x799320: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799324: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x799324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x799328: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79932c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79932cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799334: 0x3e00008  jr          $ra
    ctx->pc = 0x799334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79933Cu;
    // 0x79933c: 0x0  nop
    ctx->pc = 0x79933cu;
    // NOP
    ctx->pc = 0x799340u;
}
} // namespace gh_r022
