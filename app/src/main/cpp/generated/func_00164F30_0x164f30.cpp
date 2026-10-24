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

// Function: func_00164F30
// Address: 0x164f30 - 0x1655d8
void func_00164F30_0x164f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164F30_0x164f30");
#endif

    switch (ctx->pc) {
        case 0x164f68u: goto label_164f68;
        case 0x164f78u: goto label_164f78;
        case 0x164f80u: goto label_164f80;
        case 0x164f90u: goto label_164f90;
        case 0x164fb8u: goto label_164fb8;
        case 0x164fc8u: goto label_164fc8;
        case 0x164fd8u: goto label_164fd8;
        case 0x164fe8u: goto label_164fe8;
        case 0x164ff8u: goto label_164ff8;
        case 0x165000u: goto label_165000;
        case 0x165008u: goto label_165008;
        case 0x165014u: goto label_165014;
        case 0x165040u: goto label_165040;
        case 0x16504cu: goto label_16504c;
        case 0x165068u: goto label_165068;
        case 0x165074u: goto label_165074;
        case 0x165080u: goto label_165080;
        case 0x1650a0u: goto label_1650a0;
        case 0x1650acu: goto label_1650ac;
        case 0x1650b8u: goto label_1650b8;
        case 0x1650d8u: goto label_1650d8;
        case 0x1650e4u: goto label_1650e4;
        case 0x1650f0u: goto label_1650f0;
        case 0x165150u: goto label_165150;
        case 0x165180u: goto label_165180;
        case 0x1651d8u: goto label_1651d8;
        case 0x1653d8u: goto label_1653d8;
        case 0x1653f0u: goto label_1653f0;
        case 0x16541cu: goto label_16541c;
        case 0x165490u: goto label_165490;
        case 0x16552cu: goto label_16552c;
        case 0x1655a4u: goto label_1655a4;
        default: break;
    }

    ctx->pc = 0x164f30u;

    // 0x164f30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x164f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x164f34: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x164f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x164f38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x164f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f3c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x164f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x164f40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x164f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x164f44: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x164f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x164f48: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x164f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x164f4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x164f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x164f50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x164f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x164f54: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x164f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x164f58: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x164f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x164f5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164f60: 0xc058574  jal         func_1615D0
    ctx->pc = 0x164F60u;
    SET_GPR_U32(ctx, 31, 0x164F68u);
    ctx->pc = 0x164F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F60u;
    // 0x164f64: 0x26740180  addiu       $s4, $s3, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x164F60u, 0x164F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F68u;
label_164f68:
    // 0x164f68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x164f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164f6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x164f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f70: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x164F70u;
    SET_GPR_U32(ctx, 31, 0x164F78u);
    ctx->pc = 0x164F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F70u;
    // 0x164f74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x164F70u, 0x164F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F78u;
label_164f78:
    // 0x164f78: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x164F78u;
    SET_GPR_U32(ctx, 31, 0x164F80u);
    ctx->pc = 0x164F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F78u;
    // 0x164f7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x164F78u, 0x164F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F80u;
label_164f80:
    // 0x164f80: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x164f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x164f84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164f88: 0xc058540  jal         func_161500
    ctx->pc = 0x164F88u;
    SET_GPR_U32(ctx, 31, 0x164F90u);
    ctx->pc = 0x164F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164F88u;
    // 0x164f8c: 0x24a5f6a0  addiu       $a1, $a1, -0x960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x164F88u, 0x164F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164F90u;
label_164f90:
    // 0x164f90: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x164F90u;
    {
        const bool branch_taken_0x164f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F90u;
        // 0x164f94: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f90) {
            ctx->pc = 0x16501Cu;
            goto label_16501c;
        }
    }
    ctx->pc = 0x164F98u;
    // 0x164f98: 0x8e660050  lw          $a2, 0x50($s3)
    ctx->pc = 0x164f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x164f9c: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x164f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x164fa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164fa4: 0x26700100  addiu       $s0, $s3, 0x100
    ctx->pc = 0x164fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x164fa8: 0x26710230  addiu       $s1, $s3, 0x230
    ctx->pc = 0x164fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x164fac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x164facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164fb0: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x164FB0u;
    SET_GPR_U32(ctx, 31, 0x164FB8u);
    ctx->pc = 0x164FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FB0u;
    // 0x164fb4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x164FB0u, 0x164FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FB8u;
label_164fb8:
    // 0x164fb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164fc0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x164FC0u;
    SET_GPR_U32(ctx, 31, 0x164FC8u);
    ctx->pc = 0x164FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FC0u;
    // 0x164fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x164FC0u, 0x164FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FC8u;
label_164fc8:
    // 0x164fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164fd0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x164FD0u;
    SET_GPR_U32(ctx, 31, 0x164FD8u);
    ctx->pc = 0x164FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FD0u;
    // 0x164fd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x164FD0u, 0x164FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FD8u;
label_164fd8:
    // 0x164fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164fdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164fe0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x164FE0u;
    SET_GPR_U32(ctx, 31, 0x164FE8u);
    ctx->pc = 0x164FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FE0u;
    // 0x164fe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x164FE0u, 0x164FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FE8u;
label_164fe8:
    // 0x164fe8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164fec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x164fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164ff0: 0xc0aa7cc  jal         func_2A9F30
    ctx->pc = 0x164FF0u;
    SET_GPR_U32(ctx, 31, 0x164FF8u);
    ctx->pc = 0x164FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FF0u;
    // 0x164ff4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F30u, 0x164FF0u, 0x164FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164FF8u;
label_164ff8:
    // 0x164ff8: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x164FF8u;
    SET_GPR_U32(ctx, 31, 0x165000u);
    ctx->pc = 0x164FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164FF8u;
    // 0x164ffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x164FF8u, 0x165000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165000u;
label_165000:
    // 0x165000: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x165000u;
    SET_GPR_U32(ctx, 31, 0x165008u);
    ctx->pc = 0x165004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165000u;
    // 0x165004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x165000u, 0x165008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165008u;
label_165008:
    // 0x165008: 0xa212001c  sb          $s2, 0x1C($s0)
    ctx->pc = 0x165008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x16500c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x16500Cu;
    SET_GPR_U32(ctx, 31, 0x165014u);
    ctx->pc = 0x165010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16500Cu;
    // 0x165010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x16500Cu, 0x165014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165014u;
label_165014:
    // 0x165014: 0xa232001c  sb          $s2, 0x1C($s1)
    ctx->pc = 0x165014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 18));
    // 0x165018: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x165018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_16501c:
    // 0x16501c: 0x266201d0  addiu       $v0, $s3, 0x1D0
    ctx->pc = 0x16501cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 464));
    // 0x165020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165024: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x165024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x165028: 0x26720100  addiu       $s2, $s3, 0x100
    ctx->pc = 0x165028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x16502c: 0x26760230  addiu       $s6, $s3, 0x230
    ctx->pc = 0x16502cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x165030: 0x26770158  addiu       $s7, $s3, 0x158
    ctx->pc = 0x165030u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 344));
    // 0x165034: 0x26750280  addiu       $s5, $s3, 0x280
    ctx->pc = 0x165034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
    // 0x165038: 0x3c1e0057  lui         $fp, 0x57
    ctx->pc = 0x165038u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    // 0x16503c: 0x26700080  addiu       $s0, $s3, 0x80
    ctx->pc = 0x16503cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_165040:
    // 0x165040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165044: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x165044u;
    SET_GPR_U32(ctx, 31, 0x16504Cu);
    ctx->pc = 0x165048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165044u;
    // 0x165048: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x165044u, 0x16504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16504Cu;
label_16504c:
    // 0x16504c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16504cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165050: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x165050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x165054: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x165054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x165058: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x165058u;
    {
        const bool branch_taken_0x165058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165058u;
        // 0x16505c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165058) {
            ctx->pc = 0x165040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165040;
        }
    }
    ctx->pc = 0x165060u;
    // 0x165060: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165064: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x165064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_165068:
    // 0x165068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16506c: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x16506Cu;
    SET_GPR_U32(ctx, 31, 0x165074u);
    ctx->pc = 0x165070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16506Cu;
    // 0x165070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x16506Cu, 0x165074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165074u;
label_165074:
    // 0x165074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165078: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x165078u;
    SET_GPR_U32(ctx, 31, 0x165080u);
    ctx->pc = 0x16507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165078u;
    // 0x16507c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x165078u, 0x165080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165080u;
label_165080:
    // 0x165080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x165084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x165088: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x165088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x16508c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16508Cu;
    {
        const bool branch_taken_0x16508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16508Cu;
        // 0x165090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16508c) {
            ctx->pc = 0x165068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165068;
        }
    }
    ctx->pc = 0x165094u;
    // 0x165094: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x165094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165098: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x165098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16509c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1650a0:
    // 0x1650a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1650a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650a4: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x1650A4u;
    SET_GPR_U32(ctx, 31, 0x1650ACu);
    ctx->pc = 0x1650A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650A4u;
    // 0x1650a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x1650A4u, 0x1650ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650ACu;
label_1650ac:
    // 0x1650ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1650acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650b0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1650B0u;
    SET_GPR_U32(ctx, 31, 0x1650B8u);
    ctx->pc = 0x1650B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650B0u;
    // 0x1650b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1650B0u, 0x1650B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650B8u;
label_1650b8:
    // 0x1650b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1650b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1650bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1650bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1650c0: 0x2a220013  slti        $v0, $s1, 0x13
    ctx->pc = 0x1650c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x1650c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1650C4u;
    {
        const bool branch_taken_0x1650c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1650C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650C4u;
        // 0x1650c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650c4) {
            ctx->pc = 0x1650A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1650a0;
        }
    }
    ctx->pc = 0x1650CCu;
    // 0x1650cc: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1650ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650d0: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1650d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1650d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1650d8:
    // 0x1650d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1650d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650dc: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x1650DCu;
    SET_GPR_U32(ctx, 31, 0x1650E4u);
    ctx->pc = 0x1650E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650DCu;
    // 0x1650e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x1650DCu, 0x1650E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650E4u;
label_1650e4:
    // 0x1650e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1650e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1650e8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1650E8u;
    SET_GPR_U32(ctx, 31, 0x1650F0u);
    ctx->pc = 0x1650ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1650E8u;
    // 0x1650ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1650E8u, 0x1650F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1650F0u;
label_1650f0:
    // 0x1650f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1650f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1650f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1650f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1650f8: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1650f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1650fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1650FCu;
    {
        const bool branch_taken_0x1650fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650FCu;
        // 0x165100: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650fc) {
            ctx->pc = 0x1650D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1650d8;
        }
    }
    ctx->pc = 0x165104u;
    // 0x165104: 0x8e65015c  lw          $a1, 0x15C($s3)
    ctx->pc = 0x165104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x165108: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x165108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x16510c: 0x27c49b70  addiu       $a0, $fp, -0x6490
    ctx->pc = 0x16510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x165110: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x165110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x165114: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x165118: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x165118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16511c: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
    // 0x165120: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165124: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x165128: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16512c: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x16512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x165130: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x165130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x165134: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x165138: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x165138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x16513c: 0x8e630168  lw          $v1, 0x168($s3)
    ctx->pc = 0x16513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x165140: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165144: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x165148: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x165148u;
    SET_GPR_U32(ctx, 31, 0x165150u);
    ctx->pc = 0x16514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165148u;
    // 0x16514c: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x165148u, 0x165150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165150u;
label_165150:
    // 0x165150: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x165150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165154: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x165154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165158: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165158u;
    {
        const bool branch_taken_0x165158 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x16515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165158u;
        // 0x16515c: 0x3a020005  xori        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165158) {
            ctx->pc = 0x165168u;
            goto label_165168;
        }
    }
    ctx->pc = 0x165160u;
    // 0x165160: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x165160u;
    {
        const bool branch_taken_0x165160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165160u;
        // 0x165164: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165160) {
            ctx->pc = 0x16516Cu;
            goto label_16516c;
        }
    }
    ctx->pc = 0x165168u;
label_165168:
    // 0x165168: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x165168u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_16516c:
    // 0x16516c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x16516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x165170: 0x3c11f7ff  lui         $s1, 0xF7FF
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63487 << 16));
    // 0x165174: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x165174u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x165178: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x165178u;
    SET_GPR_U32(ctx, 31, 0x165180u);
    ctx->pc = 0x16517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165178u;
    // 0x16517c: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x165178u, 0x165180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165180u;
label_165180:
    // 0x165180: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x165180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x165184: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x165184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x165188: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x165188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16518c: 0x2472b000  addiu       $s2, $v1, -0x5000
    ctx->pc = 0x16518cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
    // 0x165190: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x165190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x165194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165198: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x165198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16519c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x16519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1651a0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x1651a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x1651a4: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1651a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1651a8: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x1651a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x1651ac: 0x84450548  lh          $a1, 0x548($v0)
    ctx->pc = 0x1651acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x1651b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1651b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1651b4: 0x0  nop
    ctx->pc = 0x1651b4u;
    // NOP
    // 0x1651b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1651b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1651bc: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x1651bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x1651c0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1651c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1651c4: 0x0  nop
    ctx->pc = 0x1651c4u;
    // NOP
    // 0x1651c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1651c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1651cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1651ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1651d0: 0xc0aa726  jal         func_2A9C98
    ctx->pc = 0x1651D0u;
    SET_GPR_U32(ctx, 31, 0x1651D8u);
    ctx->pc = 0x1651D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1651D0u;
    // 0x1651d4: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C98u, 0x1651D0u, 0x1651D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1651D8u;
label_1651d8:
    // 0x1651d8: 0x8e620174  lw          $v0, 0x174($s3)
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1651dc: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1651dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1651e0: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x1651e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1651e4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1651E4u;
    {
        const bool branch_taken_0x1651e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1651e4) {
            ctx->pc = 0x1651E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1651E4u;
            // 0x1651e8: 0x8e630174  lw          $v1, 0x174($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165210u;
            goto label_165210;
        }
    }
    ctx->pc = 0x1651ECu;
    // 0x1651ec: 0x8e630178  lw          $v1, 0x178($s3)
    ctx->pc = 0x1651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x1651f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1651f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1651f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1651f8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1651f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1651fc: 0x8e640174  lw          $a0, 0x174($s3)
    ctx->pc = 0x1651fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x165200: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x165204: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x165204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165208: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x165208u;
    {
        const bool branch_taken_0x165208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165208u;
        // 0x16520c: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x165208) {
            ctx->pc = 0x1652A0u;
            goto label_1652a0;
        }
    }
    ctx->pc = 0x165210u;
label_165210:
    // 0x165210: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x165210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x165214: 0x3421f972  ori         $at, $at, 0xF972
    ctx->pc = 0x165214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63858);
    // 0x165218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x165218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16521c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x16521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165220: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x165220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165224: 0x0  nop
    ctx->pc = 0x165224u;
    // NOP
    // 0x165228: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x165228u;
    {
        const bool branch_taken_0x165228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165228) {
            ctx->pc = 0x16522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165228u;
            // 0x16522c: 0xc6410004  lwc1        $f1, 0x4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x165244u;
            goto label_165244;
        }
    }
    ctx->pc = 0x165230u;
    // 0x165230: 0x8e630178  lw          $v1, 0x178($s3)
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x165234: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165238: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x165238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x16523c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16523Cu;
    {
        const bool branch_taken_0x16523c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16523Cu;
        // 0x165240: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16523c) {
            ctx->pc = 0x1652A0u;
            goto label_1652a0;
        }
    }
    ctx->pc = 0x165244u;
label_165244:
    // 0x165244: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x165244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x165248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x165248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16524c: 0x0  nop
    ctx->pc = 0x16524cu;
    // NOP
    // 0x165250: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x165254: 0x0  nop
    ctx->pc = 0x165254u;
    // NOP
    // 0x165258: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x165258u;
    {
        const bool branch_taken_0x165258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165258) {
            ctx->pc = 0x16526Cu;
            goto label_16526c;
        }
    }
    ctx->pc = 0x165260u;
    // 0x165260: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x165260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x165264: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x165264u;
    {
        const bool branch_taken_0x165264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165264u;
        // 0x165268: 0x34428080  ori         $v0, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165264) {
            ctx->pc = 0x16529Cu;
            goto label_16529c;
        }
    }
    ctx->pc = 0x16526Cu;
label_16526c:
    // 0x16526c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x16526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x165270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x165270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165274: 0x0  nop
    ctx->pc = 0x165274u;
    // NOP
    // 0x165278: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x165278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16527c: 0x0  nop
    ctx->pc = 0x16527cu;
    // NOP
    // 0x165280: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x165280u;
    {
        const bool branch_taken_0x165280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165280) {
            ctx->pc = 0x165294u;
            goto label_165294;
        }
    }
    ctx->pc = 0x165288u;
    // 0x165288: 0x3c02804e  lui         $v0, 0x804E
    ctx->pc = 0x165288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32846 << 16));
    // 0x16528c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16528Cu;
    {
        const bool branch_taken_0x16528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16528Cu;
        // 0x165290: 0x34426060  ori         $v0, $v0, 0x6060 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24672);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16528c) {
            ctx->pc = 0x16529Cu;
            goto label_16529c;
        }
    }
    ctx->pc = 0x165294u;
label_165294:
    // 0x165294: 0x3c028074  lui         $v0, 0x8074
    ctx->pc = 0x165294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32884 << 16));
    // 0x165298: 0x34424042  ori         $v0, $v0, 0x4042
    ctx->pc = 0x165298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16450);
label_16529c:
    // 0x16529c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x16529cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_1652a0:
    // 0x1652a0: 0x8e640288  lw          $a0, 0x288($s3)
    ctx->pc = 0x1652a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x1652a4: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1652a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1652a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1652a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1652ac: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1652acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1652b0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1652b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1652b4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1652b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1652b8: 0x8e63028c  lw          $v1, 0x28C($s3)
    ctx->pc = 0x1652b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x1652bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1652bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1652c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1652c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1652c4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1652c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1652c8: 0x8e640290  lw          $a0, 0x290($s3)
    ctx->pc = 0x1652c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 656)));
    // 0x1652cc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1652ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1652d0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1652d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1652d4: 0x16050030  bne         $s0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1652D4u;
    {
        const bool branch_taken_0x1652d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1652D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1652D4u;
        // 0x1652d8: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1652d4) {
            ctx->pc = 0x165398u;
            goto label_165398;
        }
    }
    ctx->pc = 0x1652DCu;
    // 0x1652dc: 0x8e630284  lw          $v1, 0x284($s3)
    ctx->pc = 0x1652dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x1652e0: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x1652e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x1652e4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1652e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1652e8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1652e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1652ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1652ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1652f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1652f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1652f4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1652f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1652f8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1652f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1652fc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1652fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165300: 0x8e640294  lw          $a0, 0x294($s3)
    ctx->pc = 0x165300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x165304: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165308: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16530c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16530cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165310: 0x8e630170  lw          $v1, 0x170($s3)
    ctx->pc = 0x165310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x165314: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x165314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165318: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16531c: 0x0  nop
    ctx->pc = 0x16531cu;
    // NOP
    // 0x165320: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x165320u;
    {
        const bool branch_taken_0x165320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165320) {
            ctx->pc = 0x165324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165320u;
            // 0x165324: 0x8e620170  lw          $v0, 0x170($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16533Cu;
            goto label_16533c;
        }
    }
    ctx->pc = 0x165328u;
    // 0x165328: 0x8e630288  lw          $v1, 0x288($s3)
    ctx->pc = 0x165328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x16532c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165330: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165334: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165338: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
label_16533c:
    // 0x16533c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x165340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x165340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165344: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x165344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165348: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16534c: 0x0  nop
    ctx->pc = 0x16534cu;
    // NOP
    // 0x165350: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x165350u;
    {
        const bool branch_taken_0x165350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165350) {
            ctx->pc = 0x165354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165350u;
            // 0x165354: 0x8e620170  lw          $v0, 0x170($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16536Cu;
            goto label_16536c;
        }
    }
    ctx->pc = 0x165358u;
    // 0x165358: 0x8e63028c  lw          $v1, 0x28C($s3)
    ctx->pc = 0x165358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x16535c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16535cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165360: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165364: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165368: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x165368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
label_16536c:
    // 0x16536c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x165370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x165370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165374: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x165374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165378: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x165378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16537c: 0x0  nop
    ctx->pc = 0x16537cu;
    // NOP
    // 0x165380: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x165380u;
    {
        const bool branch_taken_0x165380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x165380) {
            ctx->pc = 0x1653CCu;
            goto label_1653cc;
        }
    }
    ctx->pc = 0x165388u;
    // 0x165388: 0x8e630290  lw          $v1, 0x290($s3)
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 656)));
    // 0x16538c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165390: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x165390u;
    {
        const bool branch_taken_0x165390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165390u;
        // 0x165394: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165390) {
            ctx->pc = 0x1653C8u;
            goto label_1653c8;
        }
    }
    ctx->pc = 0x165398u;
label_165398:
    // 0x165398: 0x8e640294  lw          $a0, 0x294($s3)
    ctx->pc = 0x165398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x16539c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1653a0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1653a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1653a4: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x1653a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x1653a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1653a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1653ac: 0x8e640294  lw          $a0, 0x294($s3)
    ctx->pc = 0x1653acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x1653b0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1653b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1653b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1653b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1653b8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1653b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1653bc: 0x8e630284  lw          $v1, 0x284($s3)
    ctx->pc = 0x1653bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x1653c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1653c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1653c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1653c8:
    // 0x1653c8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1653c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1653cc:
    // 0x1653cc: 0x3c12f7ff  lui         $s2, 0xF7FF
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63487 << 16));
    // 0x1653d0: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x1653D0u;
    SET_GPR_U32(ctx, 31, 0x1653D8u);
    ctx->pc = 0x1653D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653D0u;
    // 0x1653d4: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x1653D0u, 0x1653D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653D8u;
label_1653d8:
    // 0x1653d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1653d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653dc: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1653e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1653e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653e4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1653e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x1653e8: 0x3c140800  lui         $s4, 0x800
    ctx->pc = 0x1653e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2048 << 16));
    // 0x1653ec: 0x0  nop
    ctx->pc = 0x1653ecu;
    // NOP
label_1653f0:
    // 0x1653f0: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1653f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1653F4u;
    {
        const bool branch_taken_0x1653f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F4u;
        // 0x1653f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f4) {
            ctx->pc = 0x165408u;
            goto label_165408;
        }
    }
    ctx->pc = 0x1653FCu;
    // 0x1653fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1653fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165400u;
    {
        const bool branch_taken_0x165400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165400u;
        // 0x165404: 0x521024  and         $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165400) {
            ctx->pc = 0x165410u;
            goto label_165410;
        }
    }
    ctx->pc = 0x165408u;
label_165408:
    // 0x165408: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16540c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x16540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_165410:
    // 0x165410: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165414: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x165414u;
    SET_GPR_U32(ctx, 31, 0x16541Cu);
    ctx->pc = 0x165418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165414u;
    // 0x165418: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x165414u, 0x16541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16541Cu;
label_16541c:
    // 0x16541c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16541cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165420u;
    {
        const bool branch_taken_0x165420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165420u;
        // 0x165424: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165420) {
            ctx->pc = 0x165434u;
            goto label_165434;
        }
    }
    ctx->pc = 0x165428u;
    // 0x165428: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16542c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16542Cu;
    {
        const bool branch_taken_0x16542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16542Cu;
        // 0x165430: 0x521024  and         $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16542c) {
            ctx->pc = 0x16543Cu;
            goto label_16543c;
        }
    }
    ctx->pc = 0x165434u;
label_165434:
    // 0x165434: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165438: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x165438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_16543c:
    // 0x16543c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16543cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165444: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x165444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x165448: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x165448u;
    {
        const bool branch_taken_0x165448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165448u;
        // 0x16544c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165448) {
            ctx->pc = 0x1653F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1653f0;
        }
    }
    ctx->pc = 0x165450u;
    // 0x165450: 0x8e630158  lw          $v1, 0x158($s3)
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x165454: 0x27c49b70  addiu       $a0, $fp, -0x6490
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    // 0x165458: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x165458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x16545c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16545cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165460: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x165460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165464: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x165464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x165468: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x165468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x16546c: 0x8e6201e8  lw          $v0, 0x1E8($s3)
    ctx->pc = 0x16546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
    // 0x165470: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x165470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165474: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x165474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x165478: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x165478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x16547c: 0x8e630280  lw          $v1, 0x280($s3)
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 640)));
    // 0x165480: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x165480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165484: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x165484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x165488: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x165488u;
    SET_GPR_U32(ctx, 31, 0x165490u);
    ctx->pc = 0x16548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165488u;
    // 0x16548c: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x165488u, 0x165490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165490u;
label_165490:
    // 0x165490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x165490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165494: 0x0  nop
    ctx->pc = 0x165494u;
    // NOP
    // 0x165498: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x165498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16549c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x16549cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1654a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1654a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1654a4: 0x3c014382  lui         $at, 0x4382
    ctx->pc = 0x1654a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17282 << 16));
    // 0x1654a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1654a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1654ac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1654acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1654b0: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x1654b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1654b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1654b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1654b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1654bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1654bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1654c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1654c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1654c8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1654c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1654cc: 0x8e62016c  lw          $v0, 0x16C($s3)
    ctx->pc = 0x1654ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 364)));
    // 0x1654d0: 0x24a5f718  addiu       $a1, $a1, -0x8E8
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965016));
    // 0x1654d4: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1654d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x1654d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1654d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1654dc: 0x0  nop
    ctx->pc = 0x1654dcu;
    // NOP
    // 0x1654e0: 0x0  nop
    ctx->pc = 0x1654e0u;
    // NOP
    // 0x1654e4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1654e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x1654e8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x1654ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1654ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1654f0: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1654f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1654f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1654f8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1654f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1654fc: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1654fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x165500: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x165500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x165504: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x165504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x165508: 0xc440b000  lwc1        $f0, -0x5000($v0)
    ctx->pc = 0x165508u;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16550c: 0x8e62017c  lw          $v0, 0x17C($s3)
    ctx->pc = 0x16550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x165510: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x165510u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x165514: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x165514u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x165518: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x165518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16551c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x16551cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x165520: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x165520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x165524: 0xc059950  jal         func_166540
    ctx->pc = 0x165524u;
    SET_GPR_U32(ctx, 31, 0x16552Cu);
    ctx->pc = 0x165528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165524u;
    // 0x165528: 0xae600298  sw          $zero, 0x298($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 664), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166540u, 0x165524u, 0x16552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16552Cu;
label_16552c:
    // 0x16552c: 0x8e6300d8  lw          $v1, 0xD8($s3)
    ctx->pc = 0x16552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    // 0x165530: 0x24022005  addiu       $v0, $zero, 0x2005
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8197));
    // 0x165534: 0xa26002a2  sb          $zero, 0x2A2($s3)
    ctx->pc = 0x165534u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 674), (uint8_t)GPR_U32(ctx, 0));
    // 0x165538: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
    // 0x16553c: 0xa26002a0  sb          $zero, 0x2A0($s3)
    ctx->pc = 0x16553cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 672), (uint8_t)GPR_U32(ctx, 0));
    // 0x165540: 0x3c0b0200  lui         $t3, 0x200
    ctx->pc = 0x165540u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)512 << 16));
    // 0x165544: 0xa26002a1  sb          $zero, 0x2A1($s3)
    ctx->pc = 0x165544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 673), (uint8_t)GPR_U32(ctx, 0));
    // 0x165548: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x165548u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
    // 0x16554c: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16554cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x165550: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x165554: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x165554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x165558: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x165558u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x16555c: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x16555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x165560: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x165560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x165564: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x165564u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x165568: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x165568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16556c: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x16556cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x165570: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x165570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x165574: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x165574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x165578: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x165578u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x16557c: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x16557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x165580: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x165580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x165584: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x165584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x165588: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x165588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x16558c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x16558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x165590: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x165590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x165594: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x165594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x165598: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x165598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16559c: 0xc0b23be  jal         func_2C8EF8
    ctx->pc = 0x16559Cu;
    SET_GPR_U32(ctx, 31, 0x1655A4u);
    ctx->pc = 0x1655A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16559Cu;
    // 0x1655a0: 0xac627a80  sw          $v0, 0x7A80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EF8u, 0x16559Cu, 0x1655A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1655A4u;
label_1655a4:
    // 0x1655a4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1655a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1655a8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1655a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1655ac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1655acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1655b0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1655b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1655b4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1655b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1655b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1655b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1655bc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1655bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1655c0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1655c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1655c4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1655c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1655c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1655cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1655CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1655D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1655CCu;
        // 0x1655d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1655CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1655D4u;
    // 0x1655d4: 0x0  nop
    ctx->pc = 0x1655d4u;
    // NOP
    ctx->pc = 0x1655d8u;
}
