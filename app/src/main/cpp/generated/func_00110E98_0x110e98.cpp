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

// Function: func_00110E98
// Address: 0x110e98 - 0x111010
void func_00110E98_0x110e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00110E98_0x110e98");
#endif

    switch (ctx->pc) {
        case 0x110eecu: goto label_110eec;
        case 0x110f1cu: goto label_110f1c;
        case 0x110f48u: goto label_110f48;
        case 0x110f80u: goto label_110f80;
        case 0x110f88u: goto label_110f88;
        case 0x110f98u: goto label_110f98;
        case 0x110fbcu: goto label_110fbc;
        case 0x110fc8u: goto label_110fc8;
        case 0x110fe0u: goto label_110fe0;
        case 0x110fecu: goto label_110fec;
        case 0x110ffcu: goto label_110ffc;
        default: break;
    }

    ctx->pc = 0x110e98u;

    // 0x110e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110e9c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x110e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x110ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x110ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x110ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eac: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x110eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x110eb0: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x110eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x110eb4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x110eb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x110eb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x110eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x110ebc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110EBCu;
    {
        const bool branch_taken_0x110ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EBCu;
        // 0x110ec0: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ebc) {
            ctx->pc = 0x110ED8u;
            goto label_110ed8;
        }
    }
    ctx->pc = 0x110EC4u;
    // 0x110ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110ec8: 0x50820025  beql        $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x110EC8u;
    {
        const bool branch_taken_0x110ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x110ec8) {
            ctx->pc = 0x110ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110EC8u;
            // 0x110ecc: 0x8e020640  lw          $v0, 0x640($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110F60u;
            goto label_110f60;
        }
    }
    ctx->pc = 0x110ED0u;
    // 0x110ed0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x110ED0u;
    {
        const bool branch_taken_0x110ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED0u;
        // 0x110ed4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed0) {
            ctx->pc = 0x110FCCu;
            goto label_110fcc;
        }
    }
    ctx->pc = 0x110ED8u;
label_110ed8:
    // 0x110ed8: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x110ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x110edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ee0: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x110ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x110ee4: 0xc049150  jal         func_124540
    ctx->pc = 0x110EE4u;
    SET_GPR_U32(ctx, 31, 0x110EECu);
    ctx->pc = 0x110EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EE4u;
    // 0x110ee8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x110EE4u, 0x110EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EECu;
label_110eec:
    // 0x110eec: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x110eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x110ef0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x110EF0u;
    {
        const bool branch_taken_0x110ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EF0u;
        // 0x110ef4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ef0) {
            ctx->pc = 0x110F1Cu;
            goto label_110f1c;
        }
    }
    ctx->pc = 0x110EF8u;
    // 0x110ef8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x110ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x110efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x110efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x110f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f04: 0x8c45037c  lw          $a1, 0x37C($v0)
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    // 0x110f08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x110f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f0c: 0x8c460398  lw          $a2, 0x398($v0)
    ctx->pc = 0x110f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 920)));
    // 0x110f10: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x110f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110f14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x110F14u;
    SET_GPR_U32(ctx, 31, 0x110F1Cu);
    ctx->pc = 0x110F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F14u;
    // 0x110f18: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x110F14u, 0x110F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F1Cu;
label_110f1c:
    // 0x110f1c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x110f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x110f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x110f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x110f28: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x110f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110f2c: 0x8c450364  lw          $a1, 0x364($v0)
    ctx->pc = 0x110f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x110f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f34: 0x8c460368  lw          $a2, 0x368($v0)
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x110f38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x110f38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x110f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110f40: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x110F40u;
    SET_GPR_U32(ctx, 31, 0x110F48u);
    ctx->pc = 0x110F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F40u;
    // 0x110f44: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x110F40u, 0x110F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F48u;
label_110f48:
    // 0x110f48: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x110f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x110f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110f50: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x110f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x110f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110f58: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x110f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x110f5c: 0x8e020640  lw          $v0, 0x640($s0)
    ctx->pc = 0x110f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_110f60:
    // 0x110f60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110F60u;
    {
        const bool branch_taken_0x110f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F60u;
        // 0x110f64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f60) {
            ctx->pc = 0x110F6Cu;
            goto label_110f6c;
        }
    }
    ctx->pc = 0x110F68u;
    // 0x110f68: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x110f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_110f6c:
    // 0x110f6c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x110f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x110f70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x110f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x110f74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x110f78: 0xc04939a  jal         func_124E68
    ctx->pc = 0x110F78u;
    SET_GPR_U32(ctx, 31, 0x110F80u);
    ctx->pc = 0x110F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F78u;
    // 0x110f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x110F78u, 0x110F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F80u;
label_110f80:
    // 0x110f80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x110F80u;
    SET_GPR_U32(ctx, 31, 0x110F88u);
    ctx->pc = 0x110F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F80u;
    // 0x110f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x110F80u, 0x110F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F88u;
label_110f88:
    // 0x110f88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110F88u;
    {
        const bool branch_taken_0x110f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f88) {
            ctx->pc = 0x110FA8u;
            goto label_110fa8;
        }
    }
    ctx->pc = 0x110F90u;
    // 0x110f90: 0xc049396  jal         func_124E58
    ctx->pc = 0x110F90u;
    SET_GPR_U32(ctx, 31, 0x110F98u);
    ctx->pc = 0x110F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F90u;
    // 0x110f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x110F90u, 0x110F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F98u;
label_110f98:
    // 0x110f98: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x110f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x110f9c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x110f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x110fa0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x110fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x110fa4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x110fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_110fa8:
    // 0x110fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110fac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x110fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fb4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x110FB4u;
    SET_GPR_U32(ctx, 31, 0x110FBCu);
    ctx->pc = 0x110FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FB4u;
    // 0x110fb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x110FB4u, 0x110FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FBCu;
label_110fbc:
    // 0x110fbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x110fbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x110fc0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x110FC0u;
    SET_GPR_U32(ctx, 31, 0x110FC8u);
    ctx->pc = 0x110FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FC0u;
    // 0x110fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x110FC0u, 0x110FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FC8u;
label_110fc8:
    // 0x110fc8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x110fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_110fcc:
    // 0x110fcc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x110fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x110fd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD0u;
        // 0x110fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x110FE4u;
            goto label_110fe4;
        }
    }
    ctx->pc = 0x110FD8u;
    // 0x110fd8: 0xc04ad86  jal         func_12B618
    ctx->pc = 0x110FD8u;
    SET_GPR_U32(ctx, 31, 0x110FE0u);
    ctx->pc = 0x110FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FD8u;
    // 0x110fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B618u, 0x110FD8u, 0x110FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FE0u;
label_110fe0:
    // 0x110fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110fe4:
    // 0x110fe4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x110FE4u;
    SET_GPR_U32(ctx, 31, 0x110FECu);
    ctx->pc = 0x110FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FE4u;
    // 0x110fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x110FE4u, 0x110FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FECu;
label_110fec:
    // 0x110fec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x110FECu;
    {
        const bool branch_taken_0x110fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fec) {
            ctx->pc = 0x110FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110FECu;
            // 0x110ff0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111000u;
            goto label_111000;
        }
    }
    ctx->pc = 0x110FF4u;
    // 0x110ff4: 0xc049396  jal         func_124E58
    ctx->pc = 0x110FF4u;
    SET_GPR_U32(ctx, 31, 0x110FFCu);
    ctx->pc = 0x110FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FF4u;
    // 0x110ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x110FF4u, 0x110FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FFCu;
label_110ffc:
    // 0x110ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x110ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111000:
    // 0x111000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111004: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x111004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111008: 0x3e00008  jr          $ra
    ctx->pc = 0x111008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111008u;
        // 0x11100c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111010u;
}
