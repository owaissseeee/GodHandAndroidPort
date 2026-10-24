#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r023_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r023
{
// Function: R023Init__Fv
// Address: 0x799220 - 0x799308
void R023Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R023Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992f8u: goto label_7992f8;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x79923c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x799240: 0x252c7a78  addiu       $t4, $t1, 0x7A78
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 31352));
    // 0x799244: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x799248: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x79924c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x799250: 0x8d247a78  lw          $a0, 0x7A78($t1)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x799254: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x799258: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x799258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x79925c: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x799260: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799264: 0x3c0b0200  lui         $t3, 0x200
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)512 << 16));
    // 0x799268: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79926c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x799270: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x799270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x799274: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x799278: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x799278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x79927c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x799280: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x799280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x799284: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x799288: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79928c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x799290: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x799294: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x799298: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x79929c: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x7992a0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x7992a4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x7992a8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x7992ac: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x7992b0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x7992b4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x7992b8: 0xad247a78  sw          $a0, 0x7A78($t1)
    ctx->pc = 0x7992b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x7992bc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x7992c0: 0xae029800  sw          $v0, -0x6800($s0)
    ctx->pc = 0x7992c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940672), GPR_U32(ctx, 2));
    // 0x7992c4: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x7992C4u;
    SET_GPR_U32(ctx, 31, 0x7992CCu);
    ctx->pc = 0x7992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C4u;
    // 0x7992c8: 0xad830008  sw          $v1, 0x8($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x7992C4u, 0x7992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992d8: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x7992D8u;
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->pc = 0x7992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x7992D8u, 0x7992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992ec: 0x24a59358  addiu       $a1, $a1, -0x6CA8
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939480));
    // 0x7992f0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992F0u;
    SET_GPR_U32(ctx, 31, 0x7992F8u);
    ctx->pc = 0x7992F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F0u;
    // 0x7992f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992F0u, 0x7992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799300: 0x3e00008  jr          $ra
    ctx->pc = 0x799300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799308u;
}
} // namespace gh_r023
